#include <stdio.h>

short fn4(short p1, short p2) { return p1; }

short fn11(short p1, short p2, int p3) {
  int an = 250;
  if (an) {
    p3 = p2 || (an = 0);
    if (0xBCD1 - fn4(1 - an, 0xEC) - p3 & 1)
      v = 1;
  }
  return 1;
}

int main() {
  printf("checksum = %hx\n", v);
  return 0;
}