
#include <stdio.h>

int t;
int v_int;

int main() {
  short an = 0x294A; // This variable is propagated as a constant
  t = an || (an = 0);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
