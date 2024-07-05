c
short ac_low = ac & 0xFF;
short ac_high = (ac >> 8) & 0xFF;
short ac_higher = (ac >> 16) & 0xFF;
short ac_highest = (ac >> 24) & 0xFF;

short p2_low = p2 & 0xFF;
short p2_high = (p2 >> 8) & 0xFF;
short p2_higher = (p2 >> 16) & 0xFF;
short p2_highest = (p2 >> 24) & 0xFF;

short fn2346(short p1, short p2) {
  return p1 - p2;
}

short fn23(short p1, short p2) {
  return p1 - p2;
}

short fn3(short p1, short p2) {
  return p1 - p2_high;
}

short fn46(short p1, short p2) {
  return p1 - p2;
}

short fn4(short p1, short p2) {
  return p1 - p2_high;
}

short fn6(short p1, short p2) {
  return p1 - p2_high;
}

short fn1312(short p1, short p2, short p3, short p4, short p5) {
  fn13(2L, 248UL, v, 1, 0x2F2F6D26L);
  fn12(2L, 248UL, v, 1, 0x2F2F6D26L);
  return 0;
}

short fn13(short p1, short p2, short p3, short p4, short p5) {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    p2_low = fn5(p2_low, ac_low) || (an = w) == 0x294A85636008822DLL;
    p2_high = fn5(p2_high, ac_high) || (an = w) == 0x294A85636008822DLL;
    p2_higher = fn5(p2_higher, ac_higher) || (an = w) == 0x294A85636008822DLL;
    p2_highest = fn5(p2_highest, ac_highest) || (an = w) == 0x294A85636008822DLL;
    if (fn2346(fn3(0xBCD1L, fn46(fn6(1L, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}

short fn12(short p1, short p2, short p3, short p4, short p5) {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    p2_low = fn5(p2_low, ac_low) || (an = w) == 0x294A85636008822DLL;
    p2_high = fn5(p2_high, ac_high) || (an = w) == 0x294A85636008822DLL;
    p2_higher = fn5(p2_higher, ac_higher) || (an = w) == 0x294A85636008822DLL;
    p2_highest = fn5(p2_highest, ac_highest) || (an = w) == 0x294A85636008822DLL;
    if (fn2346(fn3(0xBCD1L, fn46(fn6(1L, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}

int main() {
  fn1312(2L, 248UL, v, 1, 0x2F2F6D26L);
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
