// Copyright 2019-2020 CERN and copyright holders of ALICE O2.
// See https://alice-o2.web.cern.ch/copyright for details of the copyright holders.
// All rights not expressly granted are reserved.
//
// This software is distributed under the terms of the GNU General Public
// License v3 (GPL Version 3), copied verbatim in the file "COPYING".
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.

/// @file   EntropyEncoderSpec.cxx

#include <vector>

#include "Framework/ControlService.h"
#include "Framework/ConfigParamRegistry.h"
#include "Framework/CCDBParamSpec.h"
#include "CTPWorkflow/EntropyEncoderSpec.h"
#include "DetectorsCommonDataFormats/DetID.h"

using namespace o2::framework;

namespace o2
{
namespace ctp
{

EntropyEncoderSpec::EntropyEncoderSpec(bool selIR, bool nolumi) : mCTFCoder(o2::ctf::CTFCoderBase::OpType::Encoder), mSelIR(selIR), mNoLumi(nolumi)
{
  mTimer.Stop();
  mTimer.Reset();
}

void EntropyEncoderSpec::finaliseCCDB(o2::framework::ConcreteDataMatcher& matcher, void* obj)
{
  if (mCTFCoder.finaliseCCDB<CTF>(matcher, obj)) {
    return;
  }
}

void EntropyEncoderSpec::init(o2::framework::InitContext& ic)
{
  mCTFCoder.init<CTF>(ic);
}

void EntropyEncoderSpec::run(ProcessingContext& pc)
{
  auto cput = mTimer.CpuTime();
  mTimer.Start(false);
  mCTFCoder.updateTimeDependentParams(pc, true);
  auto digits = pc.inputs().get<gsl::span<CTPDigit>>("digits");
  static LumiInfo lumiPrev;
  const int maxDumRep = 5;
  int dumRep = 0;
  LumiInfo lumi{};
  if (!mNoLumi) {
    if (pc.inputs().get<gsl::span<char>>("CTPLumi").size() == sizeof(LumiInfo)) {
      lumiPrev = lumi = pc.inputs().get<LumiInfo>("CTPLumi");
    } else {
      if (dumRep < maxDumRep && lumiPrev.nHBFCounted == 0 && lumiPrev.nHBFCountedFV0 == 0) {
        LOGP(alarm, "Previous TF lumi used to substitute dummy input is empty, warning {} of {}", ++dumRep, maxDumRep);
      }
      lumi = lumiPrev;
    }
  }
  auto& buffer = pc.outputs().make<std::vector<o2::ctf::BufferType>>(Output{"CTP", "CTFDATA", 0});
  auto iosize = mCTFCoder.encode(buffer, digits, lumi);
  pc.outputs().snapshot({"ctfrep", 0}, iosize);
  mTimer.Stop();
  LOG(info) << iosize.asString() << " in " << mTimer.CpuTime() - cput << " s";
}

void EntropyEncoderSpec::endOfStream(EndOfStreamContext& ec)
{
  LOGF(info, "CTP Entropy Encoding total timing: Cpu: %.3e Real: %.3e s in %d slots",
       mTimer.CpuTime(), mTimer.RealTime(), mTimer.Counter() - 1);
}

DataProcessorSpec getEntropyEncoderSpec(bool selIR, bool nolumi)
{
  std::vector<InputSpec> inputs;
  inputs.emplace_back("digits", "CTP", "DIGITS", 0, Lifetime::Timeframe);
  if (!nolumi) {
    inputs.emplace_back("CTPLumi", "CTP", "LUMI", 0, Lifetime::Timeframe);
  }
  inputs.emplace_back("ctfdict", "CTP", "CTFDICT", 0, Lifetime::Condition, ccdbParamSpec("CTP/Calib/CTFDictionaryTree"));
  if (selIR) {
    inputs.emplace_back("selIRFrames", "CTF", "SELIRFRAMES", 0, Lifetime::Timeframe);
  }
  return DataProcessorSpec{
    "ctp-entropy-encoder",
    inputs,
    Outputs{{"CTP", "CTFDATA", 0, Lifetime::Timeframe}, {{"ctfrep"}, "CTP", "CTFENCREP", 0, Lifetime::Timeframe}},
    AlgorithmSpec{adaptFromTask<EntropyEncoderSpec>(selIR, nolumi)},
    Options{{"ctf-dict", VariantType::String, "ccdb", {"CTF dictionary: empty or ccdb=CCDB, none=no external dictionary otherwise: local filename"}},
            {"irframe-margin-bwd", VariantType::UInt32, 0u, {"margin in BC to add to the IRFrame lower boundary when selection is requested"}},
            {"irframe-margin-fwd", VariantType::UInt32, 0u, {"margin in BC to add to the IRFrame upper boundary when selection is requested"}},
            {"mem-factor", VariantType::Float, 1.f, {"Memory allocation margin factor"}},
            {"ans-version", VariantType::String, {"version of ans entropy coder implementation to use"}}}};
}

} // namespace ctp
} // namespace o2
