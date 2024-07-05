#include <stdio.h>

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned p;
long v;
short w;
unsigned ab;
short ac = 1L;

int main() {
  unsigned an = 250;

  for (w = 3; w; w -= 1) {
    if (an) {
      ab = ac;
      short ao = 0xBCD1L;
      if ((fn3(ao, ao - an) - ab) & 1U)
        v = 1;
    }
  }

  p = v;
  printf("checksum = %X\n", p);
  return 0;
}