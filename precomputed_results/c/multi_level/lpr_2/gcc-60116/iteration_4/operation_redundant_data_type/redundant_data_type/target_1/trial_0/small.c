#include <stdio.h>

signed char fn2(signed char p1, signed char p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

signed char q;
unsigned int w = 0xDC6F3D13L;
long ag3;
short ah;
long ak;
unsigned int ao;
unsigned int ap;

int main() {
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    unsigned int assigned_value = ~((fn2(ap, 1L) != 0) + ak) && 0x57L;
    if (w) {
      q = 0x41AEA787L;
      ag3 = assigned_value;
    } else {
      ao = assigned_value;
    }
  }
  printf("checksum = %X\n", q);
  return 0;
}