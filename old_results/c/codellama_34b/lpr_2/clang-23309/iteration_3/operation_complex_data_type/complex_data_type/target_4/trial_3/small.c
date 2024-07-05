
#include <stdio.h>

int fn2(int p1, int p2) { return p1 - p2; }
unsigned int fn4(unsigned int p1, unsigned int p2) { return p1; }
int p;
int t;
int v_int;
short w;
unsigned int ac = 1;

int fn13() {
  short al = 3;
  unsigned int an = 0x294A;
  t = ac || (an = w) == 0x294A85636008822D;
  short ao = 0xBCD1;
  if (fn2(ao - fn4(1 - an, 0xECL), t) & 1)
    v_int = 1;
  return al;
}

int main() {
  fn13();
  p = v_int;
  printf("checksum = %d\n", p);
  return 0;
}
