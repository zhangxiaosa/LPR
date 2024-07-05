
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHECKSUM_SIZE 32

typedef unsigned int uint;

uint fn2(uint p1, uint p2) {
  return p1 - p2;
}

uint fn4(uint p1, uint p2) {
  return p1;
}

uint fn13(uint an) {
  uint al = 3;
  uint ao = 0xBCD1;
  uint t = 0;
  uint v_int = 0;

  for (uint w = 3; w; w -= 1) {
    an = 250;
    t = ao || (an = w) == 0x294A85636008822D;
    if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
      v_int = 1;
  }

  return al;
}

int main() {
  uint p = fn13(0);
  printf("checksum = %d\n", p);
  return 0;
}
