
int fn2(int p1, int p2) { return p1 - p2; }
int fn3(int p1, int p2) { return p1 - p2; }
unsigned char fn4(unsigned p1, unsigned p2) { return p1; }
int fn5(int p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p1 - p2; }
short p;
short t;
int v;
char w;
int ab;
short ac = 1L;
short fn10(int, short);
short fn12(short, short, short, short, int);
int fn13() {
  short ae = 1UL;
  fn10(v, t);
  return ae;
}
short fn10(int p1, short p2) {
  fn12(2L, 248UL, p2, 1, p1);
  return 0x2F2F6D26L;
}
short fn12(short p1, short p2, short p3, short p4, int p5) {
  short an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
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
