
#include <iostream>
#include <cstdlib>
#include <cmath>

typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned char uchar;

ulong fn10(ulong p1, ulong p2) {
  // compute the sum of the two input values
  return p1 + p2;
}

uchar fn11(uchar p1, uchar p2) {
  // compute the difference between the two input values
  return p1 - p2;
}

ushort fn12(ushort p1, ushort p2, uchar p3, ushort p4, ulong p5) {
  // compute the product of the two input values
  return p1 * p2;
}

int main() {
  ulong ap = 0;
  ulong t = fn10(2, 3);
  uchar u = fn11(5, 2);
  ushort v = fn12(2, 3, 0, 1, 4);
  printf("t = %lu, u = %u, v = %u\n", t, u, v);
  return 0;
}
