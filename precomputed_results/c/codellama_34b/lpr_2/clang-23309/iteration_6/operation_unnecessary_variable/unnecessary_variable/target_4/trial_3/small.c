
#include <stdio.h>

int t;
int v_int;

int main() {
  short an = 0x294A;
  t = an = 0;
  short ao = 0xBCD1;
  v_int = an - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
