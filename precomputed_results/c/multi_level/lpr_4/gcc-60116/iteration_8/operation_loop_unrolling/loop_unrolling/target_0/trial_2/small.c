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
  for (ak = 0;;) {
    int temp_1 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    int temp_2 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    int temp_3 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    int temp_4 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;

    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_1;
    } else {
      ag3 = temp_1;
    }

    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_2;
    } else {
      ag3 = temp_2;
    }

    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_3;
    } else {
      ag3 = temp_3;
    }

    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_4;
    } else {
      ag3 = temp_4;
    }

    break;
  }

  printf("checksum = %d\n", v);
  return 0;
}