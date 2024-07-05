
unsigned short fn12(unsigned short w) {
  for (w = 3; w; w -= 1) {
    unsigned an = 250UL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), an) & 1UL)
      return 1UL;
  }
  return 3L;
}
