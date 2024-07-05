
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned fn4(unsigned p1, unsigned p2) { return p1; }

int t;
int v_int;
short w;
unsigned ac = 1;

int main() {
  short an;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
    v_int = 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
