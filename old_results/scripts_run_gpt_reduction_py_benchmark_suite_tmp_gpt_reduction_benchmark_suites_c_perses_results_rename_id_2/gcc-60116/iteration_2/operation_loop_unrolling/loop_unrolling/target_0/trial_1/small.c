#include <stdio.h>

char fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }
char q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long long ak;
unsigned ao;
unsigned ap;
int main() {
  short au[5][2][10];
  ak = 0;

  // Optimized loop unrolling

  unsigned assigned_value_0 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else
    ao = au[4][1][5];

  unsigned assigned_value_1 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else
    ao = au[4][1][5];

  unsigned assigned_value_2 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else
    ao = au[4][1][5];

  unsigned assigned_value_3 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else
    ao = au[4][1][5];

  printf("checksum = %X\n", q);
  return 0;
}