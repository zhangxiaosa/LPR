
#include <stdio.h>

int main() {
  int t = 1;
  int v_int;
  int temp = 0xBCD1 - (1 - 0x294A);
  v_int = temp - t & 1;

  printf("checksum = %d\n", v_int);

  return 0;
}
