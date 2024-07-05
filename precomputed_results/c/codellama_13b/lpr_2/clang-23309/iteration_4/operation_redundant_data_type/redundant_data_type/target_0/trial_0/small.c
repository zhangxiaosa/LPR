
unsigned short fn2(unsigned short p1, unsigned short p2) { return p1 - p2; }
unsigned short fn3(unsigned short p1, unsigned short p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
unsigned short fn5(unsigned short p1, unsigned short p2) { return p2; }
unsigned short fn6(unsigned short p1, unsigned short p2) { return p1 - p2; }
unsigned short w;
unsigned short fn12(unsigned short, unsigned short, unsigned short, unsigned short);
unsigned short fn13() { return fn12(2L, 248UL, 3, 0x2F2F6D26L); }
unsigned short fn12(unsigned short p1, unsigned short p2, unsigned short p3, unsigned short p4) {
  for (w = 3; w; w -= 1) {
    unsigned short an = 250UL;
    p2 = fn5(p2, p4) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      return 1UL;
  }
  return 3L;
}
int main() {
  unsigned short value = fn13();
  printf("checksum = %X\n", value);
  return 0;
}
