
#include <stdio.h>

int main() {
  short an;
  int w;
  unsigned ac = 1;
  int t;
  int v_int;
  short ao;

  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  ao = 0xBCD1;
  if ((ao - (1 - an)) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
