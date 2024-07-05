#include <stdio.h>

int fn6(int p1, int p2) {
  return p1 - p2;
}

int t;
int v;
short w;
short ac_value = 1;

int main() {
  int an;

  if (an = 250) {
    // First iteration of the loop
    w = 3;
    t = ac_value || (an = w) == 0x294A85636008822DL;
    short ao = 0xBCD1;
    if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
      v = 1;

    // Second iteration of the loop
    w = 2;
    t = ac_value || (an = w) == 0x294A85636008822DL;
    ao = 0xBCD1;
    if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
      v = 1;

    // Third iteration of the loop
    w = 1;
    t = ac_value || (an = w) == 0x294A85636008822DL;
    ao = 0xBCD1;
    if ((ao - (fn6(1, an) - 0xECL)) - t & 1)
      v = 1;
  }

  printf("checksum = %x\n", v);
  return 0;
}
