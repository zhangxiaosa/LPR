typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;
void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
b fn2(b p1, b p2) { return p1 - p2; }
c fn3(c p1, c p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
void fn7(p1) { p = p1; }
void fn8(p1) { fn7(p1); }
void fn9(g p1, char *p2, int p3) { fn8(p1); }
b t;
f u;
c v;
f ab;
short ac = 1L;
d fn10(g, e);
d fn11(d, f, b, e);
short fn12(b, b, d, short, g);
b fn13() {
  fn10(u, t);
  return 1UL;
}
d fn10(g p1, e p2) {
  return 0x2F2F6D26L;
}
d fn11(d p1, f p2, b p3, e p4) {
  fn12(7L, 7L, p1, 0, p1);
  return 1UL;
}
short fn12(b p1, b p2, d p3, short p4, g p5) {
  for (; w; w -= 1)
    if (250UL) {
      p2 = fn5(ab, ac) || (250UL) == 0x294A85636008822DLL;
      if (fn2(fn3(0xBCD1L, fn4(fn6(1L, 250UL), 0xECL)), p2) & 1UL)
        v = 1UL;
    }
  return 3L;
}
int main() {
  fn13();
  fn9(v, "g_170", 0);
  fn1(p, 0);
  return 0;
}