
#include <stdio.h>

int main() {
  int an = 0x294A;
  int ac = 1;
  int ao = 0xBCD1;
  int temp = ao - (1 - an);
  int v_int = temp - ac & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
