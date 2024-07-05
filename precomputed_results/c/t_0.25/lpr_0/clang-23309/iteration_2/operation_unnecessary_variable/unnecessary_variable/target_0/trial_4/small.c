#include <stdio.h>

long v;
short ac = 1L;

int main() {
  int an;
  if (1) {
    int p2 = ac || (an = 0);
    short ao = 0xBCD1L;
    if ((ao - 1L) - p2 & 1UL)
      v = 1;
  }
  printf("checksum = %lX\n", 1);
  return 0;
}