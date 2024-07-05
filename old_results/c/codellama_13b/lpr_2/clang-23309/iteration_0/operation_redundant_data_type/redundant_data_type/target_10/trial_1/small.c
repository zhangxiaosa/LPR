
typedef int p;

p fn2(p p1, p p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
short p;
void fn7(p p1) { p = p1; }
void fn9(p p1, char *p2, int p3) { fn7(p1); }
b t;
p u;
c v;
short w;
p ab;
short ac = 1L;
p fn10(p, p);
p fn11(p, p, p, p);
short fn12(p, p, p, p, p);
p fn13() {
  p ae = 1UL;
  fn10(u, t);
  return ae;
}
p fn10(p p1, p2) {
  p af = 0x2F2F6D26L;
  p ag = 248UL;
  fn11(2L, ag, p2, 1);
  return af;
}
p fn11(d p1, f p2, b p3, p p4) {
  c ai = 7L;
  p aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(p p1, p p2, p p3, p p4, p p5) {
  p al = 3L;
  c am = 1L;
  p an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      p ao = 0xBCD1L;
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
