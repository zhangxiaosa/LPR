#include <stdio.h>

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;

typedef short a;
typedef int b;
typedef long c;
typedef unsigned char d;
typedef unsigned f;

b t;
c v;
a w;
a ac = 1L;

b fn2(b p1, b p2) {
  return p1 - p2;
}

f fn5(f p1, f p2) {
  return p2;
}

d fn10(f p1, a p2) {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      p2 = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (fn2(ao - p2, 0xECL) & 1UL)
        v = 1UL;
    }
  }
  return p2;
}

b fn13() {
  b af = 0x2F2F6D26L;
  d ag = 248UL;
  c ai = 7L;
  a aj = 1UL;
  b al = 3L;
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (fn2(ao - fn4(am - an, 0xECL), t) & 1UL)
        v = 1UL;
    }
  }
  return aj;
}

int main() {
  c am = 1L;
  b an;
  for (w = 3; w; w -= 1) {
    if (an = 250UL) {
      t = ac || (an = w) == 0x294A85636008822DLL;
      a ao = 0xBCD1L;
      if (fn2(ao - fn4(am - an, 0xECL), t) & 1UL)
        v = 1UL;
    }
  }
  p = v;
  printf("checksum = %X\n", p);
  return 0;
}
