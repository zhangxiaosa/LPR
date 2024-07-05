#include <stdio.h>

// Original data types
signed int v;
unsigned int w = 0xDC6F3D13L;
signed long long ag_3;
signed int ai;
signed int ak;
signed int ao;
unsigned int ap;

// Function signatures with original data types
signed int fn2(signed int p1, signed int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

signed int fn3(signed int p1, signed int p2) {
  return p2;
}

signed int fn5(signed int p1, signed int p2) {
  return p2;
}

unsigned int fn7(unsigned int p1, unsigned int p2) {
  return p1;
}

signed long long fn8(signed int p1, signed long long p2) {
  return p1 + p2;
}

int main() {
  signed int au_0[5][2][10];
  
  // Loop variables
  signed int i, j;
  
  for (ak = 0;;) {
    for (ai = 0; ai <= 3; ai += 1) {
      if (w >= (fn7(4UL, fn7(4UL, fn5(ai, au_0[4][1][5] =
                                             fn8(~(fn3(0, fn2(ap, 1L)) != 0), ak) &&
                                             0x57L))) > 2)) {
        v = 0x41AEA787L;
        ag_3 = au_0[4][1][5];
      } else {
        ao = au_0[4][1][5];
      }
    }

    printf("checksum = %d\n", v);
    return 0;
  }
}