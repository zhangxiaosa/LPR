#include <stdio.h>

char fn4(char p1) {
  return p1;
}

int main() {
  int p;
  int t = 0;
  int v = 0;
  short w;
  int ac = 1L;
  int an = 250UL;

  for (w = 3; w; w -= 1) {
    t = ac || (w == 0x294A85636008822D);
    short ao = 0xBCD1L;

    if ((ao - fn4(1L - an)) - t & 1) {
      v = 1UL;
    }
  }

  p = v;
  printf("checksum = %d\n", p);

  return 0;
}
