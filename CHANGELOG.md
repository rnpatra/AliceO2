# Changes since 2024-01-03

## Changes in Algorithm

- [#12531](https://github.com/AliceO2Group/AliceO2/pull/12531) 2024-01-17: GPU: Compile each CUDA kernel in separate compilation unig by [@davidrohr](https://github.com/davidrohr)
## Changes in Analysis

- [#12486](https://github.com/AliceO2Group/AliceO2/pull/12486) 2024-01-09: Port features needed for HF enriched MC productions by [@fcatalan92](https://github.com/fcatalan92)
- [#12470](https://github.com/AliceO2Group/AliceO2/pull/12470) 2024-01-16: DPL Analysis: explicit slicing methods for Partition by [@aalkin](https://github.com/aalkin)
- [#12469](https://github.com/AliceO2Group/AliceO2/pull/12469) 2024-01-16: DPL Analysis: update index binding with type hash by [@aalkin](https://github.com/aalkin)
- [#12538](https://github.com/AliceO2Group/AliceO2/pull/12538) 2024-01-16: Revert "DPL Analysis: update index binding with type hash" by [@ktf](https://github.com/ktf)
## Changes in Common

- [#12503](https://github.com/AliceO2Group/AliceO2/pull/12503) 2024-01-12: DPL: detect when a Lifetime::Timeframe output is missing by [@ktf](https://github.com/ktf)
- [#12522](https://github.com/AliceO2Group/AliceO2/pull/12522) 2024-01-14: GPU: Cleanup, split compilation of kernels, and provide means to access O2Propagator in GPU code externally by [@davidrohr](https://github.com/davidrohr)
- [#12545](https://github.com/AliceO2Group/AliceO2/pull/12545) 2024-01-17: DPL: account for the case in which outputs are not user created by [@ktf](https://github.com/ktf)
- [#12531](https://github.com/AliceO2Group/AliceO2/pull/12531) 2024-01-17: GPU: Compile each CUDA kernel in separate compilation unig by [@davidrohr](https://github.com/davidrohr)
## Changes in DataFormats

- [#12494](https://github.com/AliceO2Group/AliceO2/pull/12494) 2024-01-06: Ctpdev: published CTP counters extended by [@lietava](https://github.com/lietava)
- [#12496](https://github.com/AliceO2Group/AliceO2/pull/12496) 2024-01-06: Fixing typo in global forward covariance conversion by [@mcoquet642](https://github.com/mcoquet642)
- [#12493](https://github.com/AliceO2Group/AliceO2/pull/12493) 2024-01-06: fix in TOF time slewing cal update by [@noferini](https://github.com/noferini)
- [#12497](https://github.com/AliceO2Group/AliceO2/pull/12497) 2024-01-08: ctpdev: ctp scalers error cleaning by [@lietava](https://github.com/lietava)
- [#12486](https://github.com/AliceO2Group/AliceO2/pull/12486) 2024-01-09: Port features needed for HF enriched MC productions by [@fcatalan92](https://github.com/fcatalan92)
- [#12502](https://github.com/AliceO2Group/AliceO2/pull/12502) 2024-01-10: Multiple changes for alignment with cosmic and TPC by [@shahor02](https://github.com/shahor02)
- [#12516](https://github.com/AliceO2Group/AliceO2/pull/12516) 2024-01-11: fix propagation of q!=1 tracks with 3D field by [@shahor02](https://github.com/shahor02)
- [#12525](https://github.com/AliceO2Group/AliceO2/pull/12525) 2024-01-17: ITSMFT time-evolving dead maps, builder and simulation by [@nicolovalle](https://github.com/nicolovalle)
## Changes in Detectors

- [#12494](https://github.com/AliceO2Group/AliceO2/pull/12494) 2024-01-06: Ctpdev: published CTP counters extended by [@lietava](https://github.com/lietava)
- [#12493](https://github.com/AliceO2Group/AliceO2/pull/12493) 2024-01-06: fix in TOF time slewing cal update by [@noferini](https://github.com/noferini)
- [#12489](https://github.com/AliceO2Group/AliceO2/pull/12489) 2024-01-08: ITS-GPU: Fixup for running on PbPb in async mode by [@mconcas](https://github.com/mconcas)
- [#12497](https://github.com/AliceO2Group/AliceO2/pull/12497) 2024-01-08: ctpdev: ctp scalers error cleaning by [@lietava](https://github.com/lietava)
- [#12486](https://github.com/AliceO2Group/AliceO2/pull/12486) 2024-01-09: Port features needed for HF enriched MC productions by [@fcatalan92](https://github.com/fcatalan92)
- [#12500](https://github.com/AliceO2Group/AliceO2/pull/12500) 2024-01-10: Fix macros to compile with C++20 by [@ktf](https://github.com/ktf)
- [#12502](https://github.com/AliceO2Group/AliceO2/pull/12502) 2024-01-10: Multiple changes for alignment with cosmic and TPC by [@shahor02](https://github.com/shahor02)
- [#12506](https://github.com/AliceO2Group/AliceO2/pull/12506) 2024-01-10: TPC: Adding scaler weights for 1D-distortion fluctuation correction by [@matthias-kleiner](https://github.com/matthias-kleiner)
- [#12507](https://github.com/AliceO2Group/AliceO2/pull/12507) 2024-01-11: Pass TPC corr. scaling mode on all workflows by [@shahor02](https://github.com/shahor02)
- [#12519](https://github.com/AliceO2Group/AliceO2/pull/12519) 2024-01-12: Drop unused output by [@ktf](https://github.com/ktf)
- [#12512](https://github.com/AliceO2Group/AliceO2/pull/12512) 2024-01-12: TPC: Using weights as default for IDC scaling by [@matthias-kleiner](https://github.com/matthias-kleiner)
- [#12517](https://github.com/AliceO2Group/AliceO2/pull/12517) 2024-01-12: TRD TRAP: Fix bogus error message by [@martenole](https://github.com/martenole)
- [#12521](https://github.com/AliceO2Group/AliceO2/pull/12521) 2024-01-13: Set innerparam to the rigidity by [@mpuccio](https://github.com/mpuccio)
- [#12522](https://github.com/AliceO2Group/AliceO2/pull/12522) 2024-01-14: GPU: Cleanup, split compilation of kernels, and provide means to access O2Propagator in GPU code externally by [@davidrohr](https://github.com/davidrohr)
- [#12501](https://github.com/AliceO2Group/AliceO2/pull/12501) 2024-01-15: Drop --old option for real by [@ktf](https://github.com/ktf)
- [#12498](https://github.com/AliceO2Group/AliceO2/pull/12498) 2024-01-15: Processing with ROF and vertex granularity by [@mpuccio](https://github.com/mpuccio)
- [#12511](https://github.com/AliceO2Group/AliceO2/pull/12511) 2024-01-15: Switch off reading of BadChannel CCDB information in StatusMap Creator by [@lmassacr](https://github.com/lmassacr)
- [#12464](https://github.com/AliceO2Group/AliceO2/pull/12464) 2024-01-15: Take MID fake dead channels into account when building the masks by [@dstocco](https://github.com/dstocco)
- [#12534](https://github.com/AliceO2Group/AliceO2/pull/12534) 2024-01-16: Disable testMatBudLUT on APPLE by [@sawenzel](https://github.com/sawenzel)
- [#12527](https://github.com/AliceO2Group/AliceO2/pull/12527) 2024-01-16: Update TOF integral calculation when propagation is aborted by [@shahor02](https://github.com/shahor02)
- [#12531](https://github.com/AliceO2Group/AliceO2/pull/12531) 2024-01-17: GPU: Compile each CUDA kernel in separate compilation unig by [@davidrohr](https://github.com/davidrohr)
- [#12525](https://github.com/AliceO2Group/AliceO2/pull/12525) 2024-01-17: ITSMFT time-evolving dead maps, builder and simulation by [@nicolovalle](https://github.com/nicolovalle)
## Changes in Framework

- [#12486](https://github.com/AliceO2Group/AliceO2/pull/12486) 2024-01-09: Port features needed for HF enriched MC productions by [@fcatalan92](https://github.com/fcatalan92)
- [#12500](https://github.com/AliceO2Group/AliceO2/pull/12500) 2024-01-10: Fix macros to compile with C++20 by [@ktf](https://github.com/ktf)
- [#12503](https://github.com/AliceO2Group/AliceO2/pull/12503) 2024-01-12: DPL: detect when a Lifetime::Timeframe output is missing by [@ktf](https://github.com/ktf)
- [#12515](https://github.com/AliceO2Group/AliceO2/pull/12515) 2024-01-12: DPL: remove need for special engineering type by [@ktf](https://github.com/ktf)
- [#12451](https://github.com/AliceO2Group/AliceO2/pull/12451) 2024-01-15: DPL: wait as long as possible for Sporadic inputs by [@ktf](https://github.com/ktf)
- [#12470](https://github.com/AliceO2Group/AliceO2/pull/12470) 2024-01-16: DPL Analysis: explicit slicing methods for Partition by [@aalkin](https://github.com/aalkin)
- [#12469](https://github.com/AliceO2Group/AliceO2/pull/12469) 2024-01-16: DPL Analysis: update index binding with type hash by [@aalkin](https://github.com/aalkin)
- [#12533](https://github.com/AliceO2Group/AliceO2/pull/12533) 2024-01-16: DPL GUI: add GUI to enable / disable driver signposts by [@ktf](https://github.com/ktf)
- [#12526](https://github.com/AliceO2Group/AliceO2/pull/12526) 2024-01-16: DPL: Do not report dropping of timers (unneeded) by [@davidrohr](https://github.com/davidrohr)
- [#12536](https://github.com/AliceO2Group/AliceO2/pull/12536) 2024-01-16: DPL: discard timeframe in case there is nothing which needs processing by [@ktf](https://github.com/ktf)
- [#12538](https://github.com/AliceO2Group/AliceO2/pull/12538) 2024-01-16: Revert "DPL Analysis: update index binding with type hash" by [@ktf](https://github.com/ktf)
- [#12545](https://github.com/AliceO2Group/AliceO2/pull/12545) 2024-01-17: DPL: account for the case in which outputs are not user created by [@ktf](https://github.com/ktf)
- [#12539](https://github.com/AliceO2Group/AliceO2/pull/12539) 2024-01-17: DPL: do not reset mDidDispatch too early by [@ktf](https://github.com/ktf)
- [#12542](https://github.com/AliceO2Group/AliceO2/pull/12542) 2024-01-17: DPL: helper function to enable loggers from gdb / lldb by [@ktf](https://github.com/ktf)
- [#12540](https://github.com/AliceO2Group/AliceO2/pull/12540) 2024-01-17: DPL: optimize for the case debugging is disabled by [@ktf](https://github.com/ktf)
## Changes in Generators

- [#12486](https://github.com/AliceO2Group/AliceO2/pull/12486) 2024-01-09: Port features needed for HF enriched MC productions by [@fcatalan92](https://github.com/fcatalan92)
## Changes in Steer

- [#12509](https://github.com/AliceO2Group/AliceO2/pull/12509) 2024-01-12: Account for first-orbit in collision-context creation by [@benedikt-voelkel](https://github.com/benedikt-voelkel)
- [#12525](https://github.com/AliceO2Group/AliceO2/pull/12525) 2024-01-17: ITSMFT time-evolving dead maps, builder and simulation by [@nicolovalle](https://github.com/nicolovalle)
