#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

d fn1(d p1, d p2) { return p1 + p2; }

c i;

c fn3(a p1) {
  b l;
  a m = 0x809CL;
  d n;
  for (n = 0; n + 8 <= 49; n += 8) {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }
  return p1;
}

b fn4() {
  if (0x60781BCDL >= 0x809CL ^ 4294967287UL - 0xE576516EL)
    ;
}

int main() {
  fn4();
}