#include <stdio.h>

unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p1 - p2;
}

int main() {
  unsigned int p;
  long int v;
  short int w;
  short int ac = 1;

  long int am = 1L;
  unsigned int an;

  for (w = 3; w; w -= 1) {
    if ((an = 250UL)) {
      unsigned int p2 = ac || (an = w);

      if ((0xBCD1 - (fn6(am, an) - 0xECL)) - ac & 1UL)
        v = 1UL;
    }
  }

  p = v;
  printf("checksum = %X\n", p);

  return 0;
}