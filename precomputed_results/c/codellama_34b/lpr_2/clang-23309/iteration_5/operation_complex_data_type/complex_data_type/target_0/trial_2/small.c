
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an = 0x294A;
  short ao = 0xBCD1;
  int temp = ao - (1 - an);
  int t = 0;
  short w = 0;
  unsigned ac = 1;
  int v_int = 0;

  t = ac || (an = w);
  v_int = fn2(temp, t) & 1;

  printf("checksum = %d\n", v_int);
  return 0;
}
