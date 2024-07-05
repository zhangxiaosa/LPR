
#include <stdio.h>

int main() {
  unsigned short an = 0x294A;
  unsigned short ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = temp & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
