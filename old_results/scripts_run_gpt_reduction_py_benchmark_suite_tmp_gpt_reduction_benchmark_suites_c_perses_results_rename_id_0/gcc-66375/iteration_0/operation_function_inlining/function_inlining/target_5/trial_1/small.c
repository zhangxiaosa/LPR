#include <stdio.h>

a fn2(a p1, int p2) { return p1; }
c fn3(c p1, c p2) { return p2; }
f p;
void fn5(p1) { p = p1; }
void fn6(p1) { fn5(p1); }
void fn7(g p1, char *p2, int p3) { fn6(p1); }
f t;
g v[1][4];
e fn8(a, d);
g fn9(f, f);
e fn8(a p1, d p2) {
  fn9(p2, p2, t, 18446744073709551613UL, t);
  return p1;
}
g fn9(f p1, f p2, d p3, g p4, d p5) {
  unsigned c = 255UL;
  for (g u = 0; u < 51; ++u) {
    g e[9];
    for (int i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    // Inlined fn4
    d = (v[0][3] = fn3(4L, d)) + e[0];
  }
  return p2;
}

int main() {
  int f = 0;
  // Optimized fn11 body start
  {
    a a = 0xFBL;
    d b = 0L;
    fn8(t, a);
    b;
  }
  // Optimized fn11 body end

  for (int i = 0; i < 1; i++)
    for (int j = 0; j < 4; j++)
      fn7(v[i][j], "g_1729[i][j]", f);
  printf("checksum = %X\n", p);
  return 0;
}