#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

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
a w;
f ab;
a ac = 1L;

d fn11(d p1, f p2, b p3, e p4) {
  d result = p1 & p2 ? p3 : p4;
  return result;
}

b fn13() {
  {
    w = 3;
    while (w) {
      if (250UL) {
        ab = fn5(ab, ac) || (250UL) == 0x294A85636008822DLL;
        if (fn2(fn3(0xBCD1L, fn4(fn6(1L, 250UL), 0xECL)), ab) & 1UL)
          p = 1UL;
      }
      w -= 1;
    }
    return 3;
  }
}

int main() {
  int ap = 0;
  {
    w = 3;
    while (w) {
      if (250UL) {
        ab = fn5(ab, ac) || (250UL) == 0x294A85636008822DLL;
        if (fn2(fn3(0xBCD1L, fn4(fn6(1L, 250UL), 0xECL)), ab) & 1UL)
          p = 1UL;
      }
      w -= 1;
    }
    fn9(1UL, "g_170", ap);
    printf("checksum = %X\n", p);
    return 0;
  }
}