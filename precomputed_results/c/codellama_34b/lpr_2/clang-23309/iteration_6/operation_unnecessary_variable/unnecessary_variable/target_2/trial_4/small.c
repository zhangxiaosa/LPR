
#include <stdio.h>

int t;
int v_int;

int main() {
  short an = 0x294A;
  t = 1; // Constant propagation of ac || (an = 0)
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
