#include <stdio.h>

unsigned p;
int v;
short w;
int main() {
  int ac = 1;
  short ao = 0xBCD1;

  for (w = 3; w; w -= 1) {
    ac || (w);
    if ((ao - (short)(1 - 250)) - ac & 1)
      v = 1;
  }

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}