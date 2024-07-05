
short fn2(short p1, short p2) { return p1 - p2; }
short fn3(short p1, short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
short fn6(short p1, short p2) { return p1 - p2; }
short w;
short fn12(short, short, short, short);
short fn13() { return fn12(2L, 248UL, 3, 0x2F2F6D26L); }
short fn12(short p1, short p2, short p3, short p4) {
  for (w = 3; w; w -= 1) {
    short an = 250UL;
    p2 = p2 || (an = w) == 0x294A85636008822DLL;
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
