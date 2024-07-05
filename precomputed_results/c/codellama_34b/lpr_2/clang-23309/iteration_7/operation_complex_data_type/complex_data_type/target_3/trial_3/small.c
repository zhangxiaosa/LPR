
#include <stdio.h>

int main() {
  int ac = 1;
  int an = 0x294A;
  int ao = 0xBCD1;
  int tmp1 = ac || (an = 0);
  int tmp2 = ao - (1 - an);
  int tmp3 = tmp2 - tmp1 & 1;
  int v_int = tmp3;
  printf("checksum = %d\n", v_int);
  return 0;
}
