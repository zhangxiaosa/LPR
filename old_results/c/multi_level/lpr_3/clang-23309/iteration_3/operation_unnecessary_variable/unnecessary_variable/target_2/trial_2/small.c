#include <stdio.h>

int main() {
  long v;
  short w;
  int an;
  short ao = 0xBCD1;
  short u;

  for (w = 3; w; w -= 1) {
    if (250) {
      u = (250) || (an = w) == 0x294A85636008822;
      if ((ao - 1 + an - u) & 1)
        v = 1;
    }
  }
  printf("checksum = %lX\n", v);
  return 0;
}