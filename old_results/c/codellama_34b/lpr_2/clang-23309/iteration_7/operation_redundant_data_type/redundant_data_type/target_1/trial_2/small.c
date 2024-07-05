
#include <stdio.h>

int main() {
  int ac = 1;
  int an = 0x294A;
  int t = ac || (an = 0);
  int ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
