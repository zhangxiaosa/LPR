#include <stdio.h>

char fn4(unsigned p1, unsigned p2) {
  return p1;
}

unsigned p;
int v;
short ac = 1;

int main() {
  unsigned p2;
  short ao;

  // Iteration 1
  w = 3;
  if (an = 250) {
    p2 = ac || (an = w);
    ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  // Iteration 2
  w = 2;
  if (an = 250) {
    p2 = ac || (an = w);
    ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  // Iteration 3
  w = 1;
  if (an = 250) {
    p2 = ac || (an = w);
    ao = 0xBCD1;
    if ((ao - fn4(1 - an, 0xEC)) - ac & 1)
      v = 1;
  }

  p = v | (v << 8) | (v << 16) | (v << 24);
  printf("checksum = %X\n", p);
  return 0;
}