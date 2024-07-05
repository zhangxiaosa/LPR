#include <stdio.h>

char fn4(char p1) {
  return p1;
}

int main() {
  int p = 0;
  int t = 0;
  int v = 0;
  short w = 0;
  int ac = 1;

  int an = 0;

  for (w = 3; w; w -= 1) {
    if (an == 250) {
      t = ac || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1;

      if (((ao - fn4(1 - an)) - t) & 1) {
        v = 1;
      }
    }
  }

  p = v;

  printf("checksum = %d\n", p);

  return 0;
}