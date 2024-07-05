
#include <stdio.h>

int main() {
  short an;
  int t;
  int v_int;
  short w;
  unsigned ac = 1;

  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  if ((ao - (1 - an)) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
