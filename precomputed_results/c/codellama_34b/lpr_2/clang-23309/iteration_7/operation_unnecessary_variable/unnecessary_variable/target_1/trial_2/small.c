
#include <stdio.h>

int main() {
  short an = 0x294A;
  int tmp1 = 1 || (an = 0);
  short ao = 0xBCD1;
  int tmp2 = ao - (1 - an);
  int tmp3 = tmp2 - tmp1 & 1;
  int v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
