#ifndef LLVM_TRANSFORMS_INSTRUMENTATION_DELETEREDUNDANTPOLLCHECKS_H
#define LLVM_TRANSFORMS_INSTRUMENTATION_DELETEREDUNDANTPOLLCHECKS_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class Module;

class DeleteRedundantPollchecksPass
    : public RequiredPassInfoMixin<DeleteRedundantPollchecksPass> {
public:
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &MAM);
};

} // namespace llvm

#endif /* LLVM_TRANSFORMS_INSTRUMENTATION_DELETEREDUNDANTPOLLCHECKS_H */

