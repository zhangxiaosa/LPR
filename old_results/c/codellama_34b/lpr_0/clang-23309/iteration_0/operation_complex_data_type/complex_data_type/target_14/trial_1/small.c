c
#include <stdio.h>

typedef int b;
typedef short c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }
f p;
void fn9(g p1, char *p2, int p3) { p = p1; }
int t;
f u;
long v;
short w;
f ab;
short ac = 1L;
d fn10(g, 2UL);
d fn11(d, f, int, 1UL);
short fn12(int, int, d, short, g, 0x294A85636008822DLL);
int fn13() {
  int ae = 2UL;
  fn10(u, t);
  return ae;
}
d fn10(g p1, e p2) {
  fn11(2L, 248UL, p2, 1);
  return 0x2F2F6D26L;
}
d fn11(d p1, f p2, int p3, e p4) {
  long ai = 7L;
  e aj = 1UL;
  fn12(ai, ai, p1, 0, p1);
  return aj;
}
short fn12(int p1, int p2, d p3, short p4, g p5, e p6) {
  int al = 3L;
  long am = 1L;
  int an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      p2 = fn5(ab, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if (fn2(fn3(ao, fn4(fn6(1L, an), 0xECL)), p2) & 1UL)
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
