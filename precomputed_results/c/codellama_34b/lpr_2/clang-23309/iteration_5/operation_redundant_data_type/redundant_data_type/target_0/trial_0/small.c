
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int t;
  int v_int;
  short w;
  unsigned ac = 1;

  w = 0;
  short an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
