
#include <stdio.h>

int main() {
  int t;
  int v_int;
  unsigned int ac = 1;
  short an = 0x294A;
  short ao = 0xBCD1;
  int temp;

  t = ac || (an = 0);
  temp = ao - (1 - an);
  v_int = temp - t & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}

