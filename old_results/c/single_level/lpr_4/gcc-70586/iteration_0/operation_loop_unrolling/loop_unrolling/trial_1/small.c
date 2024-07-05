#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

d fn1(d p1, d p2) {
  return p1 + p2;
}

d fn2(d p1, d p2) {
  return p1 - p2;
}

c i;

c fn3(p1) {
  b l;
  a m = 0x809CL;
  d n;

  // First unrolled iteration
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(0x60781BCDL >= m ^ 4294967287UL, o);
  }

  // Second unrolled iteration
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(8 >= m ^ 4294967287UL, o);
  }

  // Remaining unrolled iterations
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(16 >= m ^ 4294967287UL, o);
  }

  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(24 >= m ^ 4294967287UL, o);
  }

  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(32 >= m ^ 4294967287UL, o);
  }

  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(40 >= m ^ 4294967287UL, o);
  }

  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = fn2(48 >= m ^ 4294967287UL, o);
  }

  return p1;
}

int main() {
  if (fn3(1))
    ;
}