#include <stdio.h>

short v;

short fn4(short p1, short p2) {
  return p1;
}

int main() {
  int an;
  if (an = 250) {
    int p3 = 2 || (an = 0);
    short ao = 0xBCD1;
    if (ao - fn4(1 - an, 0xEC) - p3 & 1)
      v = 1;
  }
  printf("checksum = %hx\n", v);
  return 0;
}