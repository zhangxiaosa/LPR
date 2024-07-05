
typedef int c;
typedef unsigned char d;
typedef short e;
typedef int f;
typedef int g;
g fn2(g p1, g p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
short p;
short t;
c v;
short w;
g ab;
short ac = 1L;
int fn10(int, int);
int fn12(int, int, int, int, int);
int fn13() {
  int ae = 1UL;
  fn10(v, t);
  return ae;
}
int fn10(int p1, int p2) {
  int af = 0x2F2F6D26L;
  int ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}
int fn12(int p1, int p2, int p3, int p4, int p5) {
  int al = 3L;
  int am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      int ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return al;
}
int main() {
  fn13();
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
