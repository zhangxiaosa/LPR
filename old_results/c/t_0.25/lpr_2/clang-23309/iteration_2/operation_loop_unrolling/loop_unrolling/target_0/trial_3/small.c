#include <stdio.h>

unsigned ac = 1;
unsigned p;
int v;
short w;

int main() {
  int an;

  // Unrolled loop
  // First iteration
  w = 3;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - (short)(1 - an)) - ac & 1)
      v = 1;
  }
  w -= 1;

  // Second iteration
  w = 2;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - (short)(1 - an)) - ac & 1)
      v = 1;
  }
  w -= 1;

  // Third iteration
  w = 1;
  if (an = 250) {
    ac || (an = w);
    short ao = 0xBCD1;
    if ((ao - (short)(1 - an)) - ac & 1)
      v = 1;
  }
  w -= 1;

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}