
#include <stdio.h>

typedef unsigned char d;
typedef short e;
typedef unsigned f;
typedef unsigned g;

int fn2(int p1, int p2) { return p1 - p2; }
long fn3(long p1, long p2) { return p1 - p2; }
d fn4(d p1, d p2) { return p1; }
f fn5(f p1, f p2) { return p2; }
f fn6(f p1, f p2) { return p2 - p1; }

int fn13() {
  int an = 1UL;
  fn12(7L, 7L, 248UL, 0);
  return an;
}

d fn10(g p1, e p2) {
  e an = 1UL;
  if (fn5(248UL, ac) || (p2 = 250UL) == 0x294A85636008822DLL) {
    short ao = 0xBCD1L;
    if ((fn3(ao, fn4(fn6(1L, p3), 0xECL)) - p2) & 1UL) {
      v = 1UL;
    }
  }
  return an;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}

// Inlined version of fn2
short fn12(int p1, int p2, d p3, short p4) {
  int an;
  while (w) {
    if (an = 250UL) {
      p2 = fn5(248UL, ac) || (an = w) == 0x294A85636008822DLL;
      short ao = 0xBCD1L;
      if ((fn3(ao, fn4(fn6(1L, an), 0xECL)) - p2) & 1UL)
        v = 1UL;
    }
    w--;
  }
  return 0;
}
