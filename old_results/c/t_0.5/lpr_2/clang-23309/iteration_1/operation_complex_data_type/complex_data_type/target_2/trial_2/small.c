#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int main() {
  unsigned v;
  short w;
  short ac = 1;
  short an;
  short ao = 0xBCD1;

  for (w = 3; w; w -= 1) {
    if (an = 250) {
      ac || (an = w);
      if (ao - fn4(fn6(1, an), 0xEC) - ac & 1)
        v = 1;
    }
  }

  printf("checksum = %X\n", v);
  return 0;
}