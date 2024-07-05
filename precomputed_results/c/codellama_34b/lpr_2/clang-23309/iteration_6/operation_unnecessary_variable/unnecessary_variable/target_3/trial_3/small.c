
#include <stdio.h>

int main() {
  short an = 0x294A;
  an = 0;
  short ao = 0xBCD1;
  int temp = ao - 1;
  int v_int = temp & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
