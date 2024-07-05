#include <stdio.h>

char fn4(char p1) { return p1; }

int p;
int t;
int v;
short w;
int ac = 1L;

int main() {
  int an = 250UL;

  for (w = 3; w; w -= 1) {
    if (an) {
      t = ac || (an = w) == 0x294A85636008822D;
      short ao = 0xBCD1L;
      if ((ao - fn4(1L - 250UL)) - t & 1)
        v = 1UL;
    }
  }

  p = v;
  printf("checksum = %d\n", p);
  return 0;
}