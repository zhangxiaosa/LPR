
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  int ac = 1;
  short an = 0x294A;
  short w = 0;
  int ac_val = ac;
  short w_val = w;
  short an_val = an;
  int t = ac_val || (an_val = w_val);
  short ao = 0xBCD1;
  int temp = ao - (1 - an_val);
  int v_int = fn2(temp, t) & 1;
  printf("checksum = %d\n", v_int);
  return 0;
}
