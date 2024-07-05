#include <stdio.h>

typedef int b;
typedef unsigned g;

b fn2(b p1, b p2) { return p1 - p2; }

b fn3(b p1, b p2) { return p1 - p2; }

b fn4(b p1, b p2) { return p1; }

b p;

void fn7(b p1) { p = p1; }

void fn8(b p1) { fn7(p1); }

void fn9(g p1, char *p2, int p3) { fn8(p1); }

b fn11(b p1, g p2, b p3, b p4) {
  b an;
  for (an = 0; an < 3; an += 1) {
    if (an == 250) {
      p3 = p2;
      if ((fn2(fn3(0xBCD1, fn4(fn6(1, an), 0xEC)), p3) & 1))
        p = 1;
    }
  }
  return 3;
}

int main() {
  int ap = 0;
  fn11(0, 0, ap, 0);
  fn9(p, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}