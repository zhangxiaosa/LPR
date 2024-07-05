
#include <stdio.h>

int fn2(int p1_lo, int p1_hi, int p2_lo, int p2_hi) {
  int result_lo, result_hi;
  result_lo = p1_lo - p2_lo;
  result_hi = p1_hi - p2_hi;
  return result_lo | (result_hi << 32);
}

unsigned char fn4(unsigned p1, unsigned p2) {
  return p1;
}

int p;
int t;
int v_int;
short w;
unsigned ac = 1;

int fn13() {
  short al = 3;
  short an;
  for (w = 3; w; w -= 1) {
    an = 0x294A;
    t = ac || (an = w) == 0x294A85636008822D;
    short ao = 0xBCD1;
    if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
      v_int = 1;
  }
  return al;
}

int main() {
  fn13();
  p = v_int;
  printf("checksum = %d\n", p);
  return 0;
}
