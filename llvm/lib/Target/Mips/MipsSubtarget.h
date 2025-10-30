
  bool isABI_NUBI() const;

  //... other existing code

  bool hasSym32() const {
    return (HasSym32 && isABI_N64()) || isABI_N32() || isABI_O32() || isABI_NUBI();
  }