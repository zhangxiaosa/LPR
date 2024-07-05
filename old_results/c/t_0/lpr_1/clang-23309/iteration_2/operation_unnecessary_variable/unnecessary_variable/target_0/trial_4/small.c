#include <stdio.h>

unsigned p;
int t;
short w;
long ac = 1L;

int main() {
  short ao;

  for (w = 3; w; w -= 1) {
    if (250UL) {
      t = ac;
      ao = 0xBCD1L;
      if (fn3(ao, -2L) - t & 1UL) {
        p = 0;
      }
    }
  }

  printf("checksum = %X\n", p);
  return 0;
}