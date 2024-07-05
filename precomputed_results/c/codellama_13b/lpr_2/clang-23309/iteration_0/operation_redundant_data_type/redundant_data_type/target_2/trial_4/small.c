
typedef short a;
typedef int b;
typedef long d;
typedef unsigned char e;
typedef unsigned f;
typedef unsigned long g;

d fn2(d p1, d p2) { return p1 - p2; }
d fn3(d p1, d p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
d fn5(d p1, d p2) { return p2; }
d fn6(d p1, d p2) { return p1 - p2; }
d p;
void fn7(d p1) { p = p1; }
void fn9(g p1, char *p2, int p3) { fn7(p1); }
d t;
d u;
d v;
d w;
d ab;
d ac = 1L;

d fn10(g p1, e p2) {
  d af = 0x2F2F6D26L;
  d ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}

d fn11(d p1, f p2, b p3, e p4) {
  d ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}

d fn12(d p1, d p2, d p3, d p4, g p5) {
  d al = 3L;
  d am = 1L;
  d an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      d ao = 0xBCD1L;
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
