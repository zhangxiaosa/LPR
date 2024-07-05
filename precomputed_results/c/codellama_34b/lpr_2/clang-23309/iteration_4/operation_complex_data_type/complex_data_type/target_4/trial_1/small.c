
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 - p2;
}

int main() {
  short an;
  short w;
  unsigned ac;
  int t;
  int v_int;

  ac = 1;
  w = 0;
  an = 0x294A;
  t = ac || (an = w);
  short ao = 0xBCD1;

  if (fn2(ao - (1 - an), t) & 1) {
    v_int = 1;
  }

  printf("checksum = %d\n", v_int);

  return 0;
}
