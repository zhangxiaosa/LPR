
short fn6(short p1, short p2) {
  return p1 - p2;
}

short fn13() {
  short p1 = 2L;
  short p2 = 248UL;
  short p3 = 3;
  short p4 = 0x2F2F6D26L;
  for (short w = 3; w; w -= 1) {
    short an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}

int main() {
  short value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
