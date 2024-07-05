
#include <stdio.h>

int fn2(short p1, short p2) {
  return p1 - p2;
}

int main() {
  short an;
  short w;
  unsigned ac = 1;
  short ao;
  short t;
  int v_int;

  an = 0x294A;
  w = 0;
  t = ac || (an = w);
  ao = 0xBCD1;
  if (fn2(ao - (1 - an), t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
