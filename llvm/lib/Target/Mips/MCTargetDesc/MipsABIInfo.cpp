// MipsABIInfo.cpp

#include "llvm/Target/TargetABI.h"

// Add NUBI ABI support

// Check if the current ABI is NUBI
bool IsNUBI() {
    // Logic to check if the ABI is NUBI
}

void GetByValArgRegs() {
    if (IsNUBI()) {
        // NUBI specific logic for GetByValArgRegs
    }
    // Other logic
}

void getVarArgRegs() {
    if (IsNUBI()) {
        // NUBI specific logic for getVarArgRegs
    }
    // Other logic
}

void GetCalleeAllocdArgSizeInBytes() {
    if (IsNUBI()) {
        // NUBI specific logic for GetCalleeAllocdArgSizeInBytes
    }
    // Other logic
}

void GetEhDataReg() {
    if (IsNUBI()) {
        // NUBI specific logic for GetEhDataReg
    }
    // Other logic
}

void computeTargetABI() {
    if (IsNUBI()) {
        // Logic to recognize "nubi" in computeTargetABI
    }
}