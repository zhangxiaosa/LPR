#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

// Inline fn3
inline c fn3(const c p1, const c p2) { return p1 - p2; }

// Inline fn4
inline d fn4(const d p1, const d p2) { return p1; }

// Inline fn5
inline f fn5(const f p1, const f p2) { return p2; }

// Inline fn6
inline f fn6(const f p1, const f p2) { return p1 - p2; }

// Inline fn7
f p;
inline void fn7(const f p1) { p = p1; }

// Inline fn9
inline void fn9(const g p1, char* p2, const int p3) { fn7(p1); }

// Inline fn13
inline b fn13() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      u = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (((ao - ((am - an) - 0xECL)) & 1UL) & 1UL)
        v = 1UL;
    }
  return af;
}

int main() {
  e ae = 1UL;
  b af = 0x2F2F6D26L;
  d ag = 248UL;

  c ai = 7L;
  e aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1)
    if (an = 250UL) {
      u = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (((ao - ((am - an) - 0xECL)) & 1UL) & 1UL)
        v = 1UL;
    }
  g p1 = v;
  char* p2 = "g_170";
  int p3 = 0;
  f p1_copy = p1;
  p = p1_copy; // Inlined fn7 call
  printf("checksum = %X\n", p);
  return 0;
}