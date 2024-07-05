
#include <stdio.h>

int t;
int v_int;
unsigned ac = 1; // This variable is not used anywhere in the program, so it can
                 // be optimized out.

int main() {
  short an = 0x294A;
  t = ac || (an = 0);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
