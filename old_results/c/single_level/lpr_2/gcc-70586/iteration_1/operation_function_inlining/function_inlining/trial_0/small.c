#include <stdio.h>

short fn1(unsigned p1, unsigned p2) { return p1 + p2; }
short fn2(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned i;

int main() {
  int l;
  short m = 0x809C;
  unsigned n;
  for (n = 0; n <= 49; n = fn1(n, 8)) {
    unsigned o = 0xE576516E;
    if (i)
      printf("l_1179=%lld\n", (long long)l);
    unsigned p1 = 1;
    for (; n <= 49; n += 8) {
      unsigned o = 0xE576516E;
      if (i)
        printf("l_1179=%lld\n", (long long)l);
      p1 = (0x60781BCD >= m ^ 4294967287UL) - o;
    }
    return p1;
  }
  return 0;
}