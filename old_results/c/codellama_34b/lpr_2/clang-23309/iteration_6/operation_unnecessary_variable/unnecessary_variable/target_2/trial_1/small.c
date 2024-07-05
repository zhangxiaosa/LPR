
#include <stdio.h>

int t;
int v_int;

int main() {
  short an = 0x294A;
  t = an || (1 - an);
  int temp = 0xBCD1 - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
