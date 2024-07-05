#include <stdio.h>

typedef unsigned c;
typedef unsigned d;
c i;

c fn3(short p1) {
  int l;
  short m = 0x809CL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  d o = 0xE576516EL;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  return p1;
}

int fn4() {
  if (fn3(1))
    ;
}

int main() {
  fn4();
}