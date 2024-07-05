#include <stdio.h>

short v;
short w_opt;

short fn4(short p1, short p2) { return p1; }

short fn11(short p1, short p2, int p3, int w_opt) {
  int an;
  for (w_opt = 3; w_opt; w_opt -= 1)
    if (an = 250) {
      p3 = p2 || (an = w_opt) == 0x294A85636008822DLL;
      short ao = 0xBCD1;
      if (ao - fn4(1 - an, 0xEC) - p3 & 1)
        v = 1;
    }
  return 1;
}

int main() {
  short ag = 248;
  fn11(2, ag, 0, w_opt);
  printf("checksum = %hx\n", v);
  return 0;
}