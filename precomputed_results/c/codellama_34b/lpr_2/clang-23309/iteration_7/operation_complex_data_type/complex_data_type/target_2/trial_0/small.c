
#include <stdio.h>

int main() {
  int tmp1, tmp2, tmp3;
  short an, ao;
  unsigned int ac;

  an = 0x294A;
  tmp1 = ac || (an = 0);
  ao = 0xBCD1;
  tmp2 = ao - (1 - an);
  tmp3 = tmp2 - tmp1 & 1;
  v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
