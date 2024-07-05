
unsigned short fn12(unsigned short p1_low, unsigned short p1_high,
                    unsigned short p2_low, unsigned short p2_high,
                    unsigned short p3_low, unsigned short p3_high,
                    unsigned short p4_low, unsigned short p4_high) {
  unsigned char w;
  for (w = 3; w; w -= 1) {
    unsigned an = 250UL;
    p2_low = fn5(p2_low, p4_low) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2_low) & 1UL)
      return 1UL;
  }
  return 3L;
}
