#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

c fn3(c p1, c p2) { return p1 - p2; }

f fn5(f p1, f p2) { return p2; }

f fn6(f p1, f p2) { return p1 - p2; }

f p;

void fn9(g p1, char *p2, int p3) { p = p1; }

b t;
f u;
c v;
a w;
f ab;
a ac = 1L;

b fn13() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  b al = 3L;
  c am = 1L;
  for (w = 3; w; w -= 1) {
    if (250UL) {
      t = fn5(ab, ac) || 0x294A85636008822DL == 0;
      a ao = 0xBCD1L;
      if ((ao - (fn6(am, 0) - 0xECL)) - t & 1UL) {
        v = 1UL;
      }
    }
  }
  return ae;
}

int main() {
  int ap = 0;
  fn13();
  p = v;
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}