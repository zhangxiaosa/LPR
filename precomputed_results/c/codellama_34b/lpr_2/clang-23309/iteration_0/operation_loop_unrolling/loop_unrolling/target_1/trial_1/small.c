
typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;
void fn1(f p1, int p2) { printf("checksum = %X\n", p1); }
b fn2(b p1, b p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p1 - p2; }
f p;
b t;
c v;
a w;
f ab;
a ac = 1L;
b fn13() {
  b al = 3L;
  c am = 1L;
  v = fn2(0xBCD1L - fn4(fn6(am, 250UL), 0xECL), fn5(ab, ac) || (250UL == 0x294A85636008822DLL));
  return al;
}
int main() {
  int ap = 0;
  fn13();
  p = v;
  fn1(p, ap);
  return 0;
}
