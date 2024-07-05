
typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned g;
int fn2(int p1, short p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
e fn5(e p1, e p2) { return p2; }
e fn6(d p1, e p2) { return p1 - p2; }
e p;
void fn9(int p1, char *p2, int p3) { p = p1; }
int t;
e u;
c v;
a w;
e ab;
a ac = 1L;
d fn10(int, short);
d fn11(d, e, b, char);
a fn12(b, b, unsigned short, a, g);
int fn13() {
  int ae = 1UL;
  fn10(u, t);
  return ae;
}
d fn10(int p1, short p2) {
  fn11(2L, 248UL, p2, 1);
  return 248UL;
}
d fn11(d p1, e p2, b p3, char p4) {
  // The variable `aj` is optimized out
  fn12(p1, p1, p2, 0, p2);
  return 1UL;
}
a fn12(b p1, b p2, unsigned short p3, a p4, g p5) {
  int al = 3L;
  c am = 1L;
  int an;
  for (w = 3; w; w -= 1) {
    an = 250UL;
    p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), p2) & 1UL)
      v = 1UL;
  }
  return al;
}
int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
