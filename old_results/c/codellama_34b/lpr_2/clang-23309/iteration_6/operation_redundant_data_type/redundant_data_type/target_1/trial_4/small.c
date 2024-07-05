
#include <stdio.h>

int main() {
  int t = 0;
  int v_int = 0;
  int an = 0x294A;
  int ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
