typedef int b;
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
b t;
c v;
short w;
g ab;
short ac = 1L;
e fn10(g, e);
short fn12(b, b, e, short, g);
b fn13() {
  e ae = 1UL;
  fn10(v, t);
  return ae;
}
short fn10(g p1, short p2) {
  g af = 0x2F2F6D26L;
  short ag = 248UL;
  fn12(2L, ag, p2, 1, p1);
  return af;
}
short fn12(b p1, b p2, short p3, short p4, g p5) {
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
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
