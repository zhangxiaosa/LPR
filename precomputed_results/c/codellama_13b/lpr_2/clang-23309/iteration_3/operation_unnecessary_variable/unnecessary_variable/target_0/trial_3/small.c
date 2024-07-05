
short fn12(short p1, short p2, short p3, short p4, short p5) {
  for (w = 3; w; w -= 1) {
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, w), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}
