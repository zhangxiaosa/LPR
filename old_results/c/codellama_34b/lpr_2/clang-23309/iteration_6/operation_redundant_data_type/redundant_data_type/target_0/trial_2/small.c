
#include <stdio.h>

int main() {
  short an = 0x294A;
  short ao = 0xBCD1;
  short temp = ao - (1 - an);
  short v_int = temp - (an == 0) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
