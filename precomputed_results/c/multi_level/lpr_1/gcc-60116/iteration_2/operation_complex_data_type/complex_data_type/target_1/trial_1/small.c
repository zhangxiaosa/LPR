#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int fn5(int p1, int p2) {
  return 0x41AEA787L;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return 0xDC6F3D13L;
}

long long fn8(long p1, long long...}