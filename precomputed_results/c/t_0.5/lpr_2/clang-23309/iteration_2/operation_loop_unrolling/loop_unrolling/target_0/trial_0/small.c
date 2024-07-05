#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned v;
short ac = 1;

short fn13() {
  short an;
  short w = 3;

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - ac & 1)
      v = 1;
  }

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - ac & 1)
      v = 1;
  }

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - ac & 1)
      v = 1;
  }

  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}