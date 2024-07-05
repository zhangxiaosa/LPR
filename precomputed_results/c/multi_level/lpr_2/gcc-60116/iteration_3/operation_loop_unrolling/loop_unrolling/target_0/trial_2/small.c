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
  ak = 0;

  // Unrolled loop iterations
  unsigned assigned_value;

  // Iteration 1
  assigned_value = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  q = 0x41AEA787L;
  ag[3] = assigned_value;

  // Iteration 2
  assigned_value = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  q = 0x41AEA787L;
  ag[3] = assigned_value;

  // Iteration 3
  assigned_value = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  q = 0x41AEA787L;
  ag[3] = assigned_value;

  // Iteration 4
  assigned_value = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  q = 0x41AEA787L;
  ag[3] = assigned_value;

  printf("checksum = %X\n", q);
  return 0;
}