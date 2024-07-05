#include <stdio.h>

int fn2(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned fn3(unsigned p1) {
  int l;
  int m = 0x809C;
  unsigned o_0 = 0xE576516E;
  if (0) // Variable 'i' removed; always false
    printf("l_1179=%lld\n", (long long)l);
  p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o_0);
  if (0) // Variable 'i' removed; always false
    printf("l_1179=%lld\n", (long long)l);
  return p1;
}

int main() {
  if (fn3(1))
    ;
}