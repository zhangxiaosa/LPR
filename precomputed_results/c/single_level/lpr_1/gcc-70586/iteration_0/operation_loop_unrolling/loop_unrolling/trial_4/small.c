#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

d fn1(d p1, d p2) { return p1 + p2; }
d fn2(d p1, d p2) { return p1 - p2; }
c i;
c fn3(p1) {
  b l;
  a m = 0x809C;
  d n;

  d o1 = 0xE576516EL;
  d o2 = 0xE576516EL;
  d o3 = 0xE576516EL;
  d o4 = 0xE576516EL;
  d o5 = 0xE576516EL;

  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2((0x60781BCDL >= m) ^ 4294967287UL, o1);

  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2((0x60781BCDL >= m) ^ 4294967287UL, o2);

  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2((0x60781BCDL >= m) ^ 4294967287UL, o3);

  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2((0x60781BCDL >= m) ^ 4294967287UL, o4);

  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2((0x60781BCDL >= m) ^ 4294967287UL, o5);

  return p1;
}

int main() {
  fn3(1);
}