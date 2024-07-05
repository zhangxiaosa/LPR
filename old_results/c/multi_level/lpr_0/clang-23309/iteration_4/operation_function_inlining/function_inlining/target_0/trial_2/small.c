#include <stdio.h>

unsigned p;
long v;
int w;
unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

int main() {
  int an;
  short ao;
  for (w = 3; w > 0; w -= 1) {
    if (an == 250UL) {
      an = w;
      ao = 0xBCD1L;
      if ((ao - (1L - an - 0xECl)) - 1UL)
        v = 1UL;
    }
  }
  printf("checksum = %lX\n", v);
  return 0;
}