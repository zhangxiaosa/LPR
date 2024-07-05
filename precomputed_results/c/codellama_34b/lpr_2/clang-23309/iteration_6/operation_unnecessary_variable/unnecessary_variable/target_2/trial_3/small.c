
#include <stdio.h>

int t;
int v_int;

int main() {
  short an = 0x294A;
  t = an;
  short ao = 0xBCD1;
  int temp = ao - t;
  v_int = temp & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
