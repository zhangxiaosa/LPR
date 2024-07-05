
#include <stdio.h>

int main() {
  short an = 0x294A;
  short ao = 0xBCD1;
  int v_int = ao - an + 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
