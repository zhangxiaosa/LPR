
#include <stdio.h>

typedef unsigned long d;
typedef short e;
typedef unsigned g;

#define CHECKSUM_CONSTANT 248UL

d fn10(g p1, short p2);
int fn13();

int main() {
  d checksum = fn13();
  printf("checksum = %X\n", checksum);
  return 0;
}

d fn10(g p1, short p2) {
  short an = 1UL;
  fn12(7L, 7L, p1, 0);
  return an;
}

int fn13() {
  return fn10(CHECKSUM_CONSTANT, CHECKSUM_CONSTANT);
}

void fn12(int p1, int p2, d p3, short p4) {
  if (p3 == CHECKSUM_CONSTANT) {
    v = 1UL;
  }
}
