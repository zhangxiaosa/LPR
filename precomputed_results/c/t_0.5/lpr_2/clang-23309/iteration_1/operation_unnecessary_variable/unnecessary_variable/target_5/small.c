#include <stdio.h>

char fn4(unsigned p1, unsigned p2) { return p1; }

unsigned fn6(unsigned p1, unsigned p2) { return p1 - p2; }

unsigned v;
short ac = 1;

short fn13() {
  short an;
  short w = 3; // Replace w with the constant value 3
  for (; w; w -= 1) {
    if (an = 250) {
      ac || (an = w);
      short ao = 0xBCD1;
      if (ao - fn4(1 - an, 0xEC) - ac & 1)
        v = 1;
    }
  }
  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}