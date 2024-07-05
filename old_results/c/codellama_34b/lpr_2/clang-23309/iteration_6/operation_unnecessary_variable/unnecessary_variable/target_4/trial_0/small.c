
#include <stdio.h>

int t = 1;
int v_int;

int main() {
  short an = 0x294A;
  t = 1;
  short ao = 0xBCD1;
  int temp = 0xBCD1;
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
