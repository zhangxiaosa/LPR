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

b fn13() {
  e ae = 1UL;
  c ai = 7L;
  e aj = 1UL;

  // Inlined code from fn12
  for (w = 3; w != 0; w -= 1) {
    if (250UL) {
      f p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
      c ai = 7L;
      e aj = 1UL;

      if (fn2(fn3(0xBCD1L, fn4(fn6(1L, w), 0xECL)), p2) & 1UL)
        v = 1UL;
    } else {
      c ai = 7L;
      e aj = 1UL;
      // Inlined code from fn12
      for (w = 3; w != 0; w -= 1) {
        if (250UL) {
          f p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
          c ai = 7L;
          e aj = 1UL;

          if (fn2(fn3(0xBCD1L, fn4(fn6(1L, w), 0xECL)), p2) & 1UL)
            v = 1UL;
        } else {
          c ai = 7L;
          e aj = 1UL;
          // Inlined code from fn12
          for (w = 3; w != 0; w -= 1) {
            if (250UL) {
              f p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
              c ai = 7L;
              e aj = 1UL;

              if (fn2(fn3(0xBCD1L, fn4(fn6(1L, w), 0xECL)), p2) & 1UL)
                v = 1UL;
            } else {
              c ai = 7L;
              e aj = 1UL;
              // Inlined code from fn12
              for (w = 3; w != 0; w -= 1) {
                if (250UL) {
                  f p2 = fn5(ab, ac) || (w) == 0x294A85636008822DLL;
                  c ai = 7L;
                  e aj = 1UL;

                  if (fn2(fn3(0xBCD1L, fn4(fn6(1L, w), 0xECL)), p2) & 1UL)
                    v = 1UL;
                } else {
                  c ai = 7L;
                  e aj = 1UL;
                }
              }
            }
          }
        }
      }
    }
  }

  return 3L;
}

int main() {
  int ap = 0;
  fn13();
  fn9(v, "g_170", ap);
  printf("checksum = %X\n", p);
  return 0;
}
