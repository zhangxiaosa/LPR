#include <stdio.h>
#include <stdint.h>

int8_t fn2(int8_t p1, int8_t p2) { return p1 && p2 ? p1 : p1 % p2; }
int8_t q;
unsigned w = 0xDC6F3D13L;
int8_t ag3;
short int ah;
long long ak;
unsigned ao;
unsigned ap;

int main() {
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1) {
    unsigned assigned_value = ~((fn2(ap, 1L) != 0) + ak) && 0x57L;
    if (w) {
      q = 0x41AEA787L;
      ag3 = assigned_value;
    } else
      ao = assigned_value;
  }
  printf("checksum = %X\n", q);
  return 0;
}