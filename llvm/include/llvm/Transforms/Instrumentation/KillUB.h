#ifndef LLVM_TRANSFORMS_INSTRUMENTATION_KILLUB_H
#define LLVM_TRANSFORMS_INSTRUMENTATION_KILLUB_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class Module;

class KillUBPass : public RequiredPassInfoMixin<KillUBPass> {
public:
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &MAM);
};

} // namespace llvm

#endif /* LLVM_TRANSFORMS_INSTRUMENTATION_KILLUB_H */

