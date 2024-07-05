
short p;
short t;
short v;
short w;
unsigned char ab;
unsigned char ac = 1L;
short fn10(short, short);
short fn12(short, short, short, short, unsigned char);
short fn13() {
  fn10(v, t);
  return 0;
}
short fn10(short p1, short p2) {
  fn12(2L, 248UL, p2, 1, ab);
  return 0x2F2F6D26L;
}
short fn12(short p1, short p2, short p3, short p4, unsigned char p5) {
  for (w = 3; w; w -= 1) {
    unsigned char an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    if (fn2(fn3(0xBCD1L, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return 3L;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
