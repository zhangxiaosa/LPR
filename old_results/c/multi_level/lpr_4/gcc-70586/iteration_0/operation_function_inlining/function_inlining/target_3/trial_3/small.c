#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned c;
typedef unsigned d;

c i;

b fn4() {
  b p1 = 1;
  b l;
  a m = 0x809C;
  d n;
  for (n = 0; (n + 8) <= 49; n = (n + 8)) {
    d o = 0xE576516E;

    if (i)
      printf("l_1179=%lld\n", (long long)l);

    p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
  }
  return p1;
}

int main() {
  fn4();
  return 0;
}
