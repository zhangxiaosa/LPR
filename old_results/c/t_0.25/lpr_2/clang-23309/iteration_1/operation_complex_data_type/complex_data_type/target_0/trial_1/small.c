#include <stdio.h>

int main() {
  int ac = 1;
  unsigned int p;
  int v;
  short w;

  int an;
  for (w = 3; w; w -= 1) {
    an = 250;
    if (an != 0) {
      if (ac != 0 || w != 0) {
        an = w;
        short ao = 0xBCD1;
        if (((ao - (short)(1 - an)) - ac) & 1) {
          v = 1;
        }
      }
    }
  }
  p = v;
  printf("checksum = %d\n", p);
  return 0;
}