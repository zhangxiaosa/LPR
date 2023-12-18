#include <stdio.h>

int main() {
  int t;
  short u;
  long v;
  short w;
  short ac_p = 1L;

  unsigned al = 3L;
  long am = 1L;

  for (w = 3; w; w -= 1) {
    if (u == 250UL) {
      int p2 = ac_p || (u = w) == 0x294A85636008822L;
      if (((0xBCD1L - (u - 0xECL)) - p2) & 1UL)
        v = 1UL;
    }
  }

  int p = v;
  printf("checksum = %X\n", p);
  return 0;
}
