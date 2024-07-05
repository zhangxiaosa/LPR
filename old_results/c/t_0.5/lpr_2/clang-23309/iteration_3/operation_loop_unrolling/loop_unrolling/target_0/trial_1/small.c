#include <stdio.h>

char fn4(p1) { return p1; }

unsigned v;
short ac = 1;

short fn13() {
  short an;
  short w = 3;

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an) - ac & 1)
      v = 1;
  }

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an) - ac & 1)
      v = 1;
  }

  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an) - ac & 1)
      v = 1;
  }

  return 3;
}

int main() {
  fn13();
  printf("checksum = %X\n", v);
  return 0;
}