
#include <stdio.h>

int main() {
  short an = 0x294A;
  int ac = 1;
  an = 0;
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = temp - (ac || an) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
