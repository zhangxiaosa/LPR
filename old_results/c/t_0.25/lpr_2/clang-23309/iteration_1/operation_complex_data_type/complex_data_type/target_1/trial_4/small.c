#include <stdio.h>

int ac = 1;
unsigned int p;
int v;
short w;

int main() {
  int an;
  short ao;

  for (w = 3; w; w -= 1) {
    an = 250;

    if (an == 250) {
      if (ac != 0 || an == w) {
        an = w;
      }

      ao = 0xBCD1;

      if (((ao - (short)(1 - an)) - ac) & 1) {
        v = 1;
      }
    }
  }

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}