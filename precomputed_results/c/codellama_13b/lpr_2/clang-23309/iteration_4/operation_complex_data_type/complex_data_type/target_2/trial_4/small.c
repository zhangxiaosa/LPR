
unsigned short fn12_opt(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4) {
  if (p1 == 3) {
    return fn12_opt(p1 - 1, fn3(0xBCD1L, fn4(fn6(1L, p1))), p3, p4);
  }
  return 3L;
}
