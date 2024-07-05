#include <stdio.h>

unsigned p;
unsigned t;
unsigned v;
unsigned w;
unsigned short ac = 1;

unsigned fn4(unsigned p1) {
  return p1;
}

int main() {
  unsigned an;
  w = 3U;
  w -= 1U;
  if (an == 250U) {
    t = ac || (an = w) == 0x294A85636008822ULL;
    if (0xBCD1ULL - fn4(1U - an) - t & 1U)
      v = 1U;
  }
  p = v;
  printf("checksum = %u\n", p);
  return 0;
}