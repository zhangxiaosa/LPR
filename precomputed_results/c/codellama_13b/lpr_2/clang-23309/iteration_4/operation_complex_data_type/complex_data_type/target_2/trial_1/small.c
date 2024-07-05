
unsigned fn12(unsigned short p1, unsigned short p2, unsigned short p3,
                    unsigned short p4) {
  unsigned w;
  for (w = 3; w; w--) {
    unsigned char an = 250;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822D;
    if (fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xECL)), p2) & 1)
      return 1;
  }
  return 3;
}
