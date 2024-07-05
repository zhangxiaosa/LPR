
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }

int t;
int v_int;
unsigned short w;
unsigned ac = 1;

int main() {
  unsigned short an;
  w = 0;
  an = 0x294A;
  unsigned ac_val = ac;
  unsigned short w_val = w;
  unsigned short an_val = an;
  t = ac_val || (an_val = w_val);
  unsigned short ao = 0xBCD1;
  int temp = (ao & 0x7FFF) - (1 - an_val);
  v_int = fn2(temp, t) % 2;
  printf("checksum = %d\n", v_int);
  return 0;
}

// The target to be optimized is temp: It is an int variable, and its value is calculated as ao - (1 - an).
