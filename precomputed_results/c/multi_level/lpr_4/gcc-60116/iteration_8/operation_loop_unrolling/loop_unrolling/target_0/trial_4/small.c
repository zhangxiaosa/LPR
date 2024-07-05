#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long long fn8(int p1, long long p2) {
  return p1 + p2;
}

int v;
int w = 0xDC6F3D13L;
long long ag3;
int ah;
int ak;
int ap32;

int main() {
  for (ah = 0; ah <= 12; ah += 3) {
    int temp1 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp1;
    } else {
      ag3 = temp1;
    }

    int temp2 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp2;
    } else {
      ag3 = temp2;
    }

    int temp3 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp3;
    } else {
      ag3 = temp3;
    }

    int temp4 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp4;
    } else {
      ag3 = temp4;
    }
  }

  printf("checksum = %d\n", v);
  return 0;
}