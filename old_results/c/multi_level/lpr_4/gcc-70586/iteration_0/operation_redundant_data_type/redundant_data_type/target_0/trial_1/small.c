#include <stdio.h>

typedef int b;
typedef unsigned c;
typedef unsigned d;
c i;
c fn3(p1) {
  b l;
  int m = 0x809C;
  d o = 0xE576516E;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
  if (i)
    printf("l_1179=%lld\n", (long long)l);
  return p1;
}
b fn4() {
  if (fn3(1))
    ;
}

int main() { fn4(); }
