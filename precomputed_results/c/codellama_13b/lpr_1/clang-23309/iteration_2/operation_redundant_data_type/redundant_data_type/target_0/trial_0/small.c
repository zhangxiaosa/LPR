
typedef unsigned char d;
typedef short f;
void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn6(f p1, f p2) { return p1 - p2; }
int p;
void fn9(unsigned p1, char *p2, int p3) { p = p1; }
unsigned v;
short w;
f ab;
long ac = 3L;
short fn12(long, long, long, short, unsigned long);
int fn13() {
  f ae = 1UL;
  fn12(ae, ae, 2L, 0, 2L);
  return ae;
}
short fn12(long p1, long p2, long p3, short p4, unsigned long p5) {
  long an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn6(ab, ac) || (an = w) == 0x294A85636008822DLL;
      f ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1UL, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return 3L;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}
