#include <stdio.h>

char fn2(char p1, char p2) {
    return p1 && p2 ? p1 : p1 % p2;
}

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

  // Unrolled loop iteration 0
  unsigned assigned_value_0 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else {
    ao = au[4][1][5];
  }

  // Unrolled loop iteration 1
  unsigned assigned_value_1 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + (ak + 1) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else {
    ao = au[4][1][5];
  }

  // Unrolled loop iteration 2
  unsigned assigned_value_2 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + (ak + 2) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else {
    ao = au[4][1][5];
  }

  // Unrolled loop iteration 3
  unsigned assigned_value_3 = au[4][1][5] = ~(fn2(ap, 1L) != 0) + (ak + 3) && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = au[4][1][5];
  } else {
    ao = au[4][1][5];
  }

  // Output checksum for each unrolled iteration
  printf("checksum0 = %X\n", q);
  printf("checksum1 = %X\n", q);
  printf("checksum2 = %X\n", q);
  printf("checksum3 = %X\n", q);

  return 0;
}
