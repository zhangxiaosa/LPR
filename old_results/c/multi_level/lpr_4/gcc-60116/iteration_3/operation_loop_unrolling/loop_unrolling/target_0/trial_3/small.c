#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(int p1, int p2) {
  return p2;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int aj;
long ak;
int al;
int am = 0x41AEA787L;
int ao;
int ap;

int fn12() {
  long au_0_0;
  long au_0_1;
  long au_0_2;
  long au_0_3;

  ak = 0;

  au_0_0 = fn8(~(fn3(aj, fn2(ap, 1)) != 0), ak) && 0x57;
  if (w) {
    v = am;
    ag[3] = au_0_0;
  } else {
    ao = au_0_0;
  }

  au_0_1 = fn8(~(fn3(aj, fn2(ap, 1)) != 0), ak + 1) && 0x57;
  if (w) {
    v = am;
    ag[3] = au_0_1;
  } else {
    ao = au_0_1;
  }

  au_0_2 = fn8(~(fn3(aj, fn2(ap, 1)) != 0), ak + 2) && 0x57;
  if (w) {
    v = am;
    ag[3] = au_0_2;
  } else {
    ao = au_0_2;
  }

  au_0_3 = fn8(~(fn3(aj, fn2(ap, 1)) != 0), ak + 3) && 0x57;
  if (w) {
    v = am;
    ag[3] = au_0_3;
  } else {
    ao = au_0_3;
  }

  return al;
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}
