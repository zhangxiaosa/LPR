#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;


d fn1(d p1, d p2) {
  return p1 + p2;
}

c i;


b fn4() {
  b l;
  a m = 0x809cL;
  d n;
  for (n = 0; n + 8 <= 49; n += 8) {
    d o = 0xe576516eL;
    if (i)
      printf("l_1179=%%lld\n", (long long)l);
    b p1 = (0x60781bcdL >= m ^ 4294967287UL) - o;
  }
  return p1;
}

int main() {
  fn4();
}
