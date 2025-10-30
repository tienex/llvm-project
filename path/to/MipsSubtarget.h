// Declaration of the method
bool isABI_NUBI() const;

// Updating the hasSym32 method
return (HasSym32 && isABI_N64()) || isABI_N32() || isABI_O32() || isABI_NUBI();