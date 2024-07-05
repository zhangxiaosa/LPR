#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

c i;

b fn4() {
  a m = 0x809CL;
  d o = 0xE576516EL;
  printf("l_1179=%lld\n", (long long)0);
  if (0x60781BCDL >= m ^ 4294967287UL - o)
    ;
}

int main() { fn4(); }
