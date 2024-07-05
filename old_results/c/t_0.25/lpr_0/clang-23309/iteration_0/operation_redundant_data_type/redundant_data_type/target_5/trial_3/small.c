#include <stdio.h>

typedef long c;
typedef short d;
typedef unsigned g;

char fn4(char p1, char p2) { return p1; }

unsigned p;
int t;
unsigned u;
c v;

char fn10(unsigned p1, short p2);

short fn12(int p1, int p2, char p3, short p4, unsigned p5);

unsigned fn13() {
  fn10(u, t);
  return 1;
}

char fn10(unsigned p1, short p2) {
  fn12(7L, 7L, 2L, 0, 2L);
  return 0;
}

short fn12(int p1, int p2, char p3, short p4, unsigned p5) {
  if ((0xBCD1L - fn4(1L - 0, 0xECL)) - p2 & 1UL)
    v = 1UL;
  return 3L;
}

int main() {
  fn13();
  p = v;
  printf("checksum = %u\n", p);
  return 0;
}