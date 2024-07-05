#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;

c fn3(a);
b fn4() {
  if (fn3(1))
    ;
}

c fn3(a p1) {
  b l;
  a m = 0x809CL;
  d n;

  // Unrolled loop iteration 0
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 1
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 2
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 3
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 4
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 5
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 6
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  // Unrolled loop iteration 7
  {
    d o = 0xE576516EL;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCDL >= m ^ 4294967287UL) - o;
  }

  return p1;
}

int main() {
  fn4();
}