c
#include <stdio.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

d fn10(g p1, e p2) {
  d p3 = 2L;
  e p4 = 1UL;
  d p5 = 0x2F2F6D26L;
  return p5;
}

d fn11(d p1, f p2, int p3, e p4) {
  d p5 = 7L;
  e p6 = 1UL;
  d p7 = fn6(1L, 250UL);
  if (p7 == 0x294A85636008822DLL) {
    p4 = 0xBCD1L;
    if (fn2(fn3(p4, fn4(fn6(1L, p7), 0xECL)), p2) & 1UL) {
      v = 1UL;
    }
  }
  return p6;
}

short fn12(int p1, int p2, d p3, short p4, g p5) {
  int p6 = 3L;
  long p7 = 1L;
  int p8;
  for (int w = 3; w; w -= 1) {
    p8 = 250UL;
    if (p8 == 0x294A85636008822DLL) {
      p5 = 0xBCD1L;
      if (fn2(fn3(p5, fn4(fn6(1L, p8), 0xECL)), p2) & 1UL) {
        p6 = 1UL;
      }
    }
  }
  return p6;
}

int main() {
  v = fn13();
  fn9(v, "g_170", 0);
  printf("checksum = %X\n", p);
  return 0;
}
