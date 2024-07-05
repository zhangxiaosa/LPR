#include <stdio.h>

c i;
c fn3(a);
b fn4() {
  if (fn3(1))
    ;
}

c fn3(a p1) {
  b l;
  a m = 0x809C;
  d n;
  for (n = 0; n + 8 <= 49; n = n + 8) {
    d o = 0xE576516E;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    p1 = (0x60781BCD >= m ^ 4294967287UL) ? (p1 - o) : (p1 + o);
  }
  return p1;
}

int main() {
  b l;
  a m = 0x809C;
  d n;
  for (n = 0; n + 8 <= 49; n = n + 8) {
    d o = 0xE576516E;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    (0x60781BCD >= m ^ 4294967287UL) ? (fn3(0x60781BCD >= m ^ 4294967287UL - o))
                                     : fn3(0x60781BCD >= m ^ 4294967287UL + o);
  }
}