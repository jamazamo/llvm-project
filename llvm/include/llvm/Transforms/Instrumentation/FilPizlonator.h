#ifndef LLVM_TRANSFORMS_INSTRUMENTATION_FILPIZLONATOR_H
#define LLVM_TRANSFORMS_INSTRUMENTATION_FILPIZLONATOR_H

#include "llvm/IR/PassManager.h"

namespace llvm {

class Module;

class FilPizlonatorPass : public RequiredPassInfoMixin<FilPizlonatorPass> {
public:
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &MAM);
};

} // namespace llvm

#endif /* LLVM_TRANSFORMS_INSTRUMENTATION_FILPIZLONATOR_H */

