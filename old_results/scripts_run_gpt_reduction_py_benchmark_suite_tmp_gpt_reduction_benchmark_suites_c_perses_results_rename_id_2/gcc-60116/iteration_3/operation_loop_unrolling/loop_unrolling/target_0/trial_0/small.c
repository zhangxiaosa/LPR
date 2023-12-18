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
  ak = 0;

  unsigned assigned_value1 = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = assigned_value1;
  } else {
    ao = assigned_value1;
  }

  unsigned assigned_value2 = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = assigned_value2;
  } else {
    ao = assigned_value2;
  }

  unsigned assigned_value3 = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = assigned_value3;
  } else {
    ao = assigned_value3;
  }

  unsigned assigned_value4 = ~(fn2(ap, 1L) != 0) + ak && 0x57L;
  if (w) {
    q = 0x41AEA787L;
    ag[3] = assigned_value4;
  } else {
    ao = assigned_value4;
  }

  printf("checksum = %X\n", q);
  return 0;
}