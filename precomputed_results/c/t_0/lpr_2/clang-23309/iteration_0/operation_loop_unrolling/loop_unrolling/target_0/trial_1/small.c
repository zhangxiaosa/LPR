#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

void fn1(f p1, int p2) {
  printf("checksum = %X\n", p1);
}

b fn2(b p1, b p2) {
  return p1 - p2;
}

c fn3(c p1, c p2) {
  return p1 - p2;
}

d fn4(d p1, d p2) {
  return p1;
}

f fn6(f p1, f p2) {
  return p1 - p2;
}

f p;
b t;
c v;
a w;
a ac = 1L;

int main() {
  int ap = 0;
  c am = 1L;
  b an;

  // Unrolled loop iteration 1
  w = 3;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), t) & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 2
  w = 2;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), t) & 1UL)
      v = 1UL;
  }

  // Unrolled loop iteration 3
  w = 1;
  if (an = 250UL) {
    t = ac || (an = w) == 0x294A85636008822DLL;
    a ao = 0xBCD1L;
    if (fn2(fn3(ao, fn4(fn6(am, an), 0xECL)), t) & 1UL)
      v = 1UL;
  }

  p = v;
  fn1(p, ap);
  return 0;
}