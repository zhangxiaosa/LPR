#include <stdint.h>
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int64_t fn8(int p1, int64_t p2) {
  return p1 + p2;
}

int main() {
  int v;
  int w = 0xDC6F3D13L;
  int64_t ag3;
  int ah;
  int ak;
  int ap;
  int au_0;

  // Optimized code
  int64_t temp1 = ~(ap && 1 ? ap : ap % 1) != 0;
  int64_t temp2 = fn8(temp1, ak) & 0x57;

  if (w) {
    v = 0x41AEA787L;
    ag3 = temp2;
  } else {
    ag3 = temp2;
  }

  printf("checksum = %d\n", v);

  return 0;
}
