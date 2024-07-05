#include <stdio.h>

int v;
short ac = 1;

int main() {
  int an;

  // First iteration (w = 3)
  if (an = 250) {
    ac || (an = 3);
    if (((short)0xBCD1 - (short)(1 - an)) - ac & 1)
      v = 1;
  }

  // Second iteration (w = 2)
  if (an = 250) {
    ac || (an = 2);
    if (((short)0xBCD1 - (short)(1 - an)) - ac & 1)
      v = 1;
  }

  // Third iteration (w = 1)
  if (an = 250) {
    ac || (an = 1);
    if (((short)0xBCD1 - (short)(1 - an)) - ac & 1)
      v = 1;
  }

  printf("checksum = %X\n", v);
  return 0;
}