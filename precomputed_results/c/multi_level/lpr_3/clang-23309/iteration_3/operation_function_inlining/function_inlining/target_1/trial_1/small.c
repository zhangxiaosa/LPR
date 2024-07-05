#include <stdio.h>

int main() {
  int an;
  short ao = 0xBCD1;
  short ac_p = 1;
  short v = 0;
  short w;
  for (w = 3; w; w -= 1) {
    if (an = 250) {
      short u = ac_p || (an = w) == 0x294A85636008822;
      if ((ao - (1 - an)) - u & 1)
        v = 1;
    }
  }
  printf("checksum = %lX\n", v);
  return 0;
}