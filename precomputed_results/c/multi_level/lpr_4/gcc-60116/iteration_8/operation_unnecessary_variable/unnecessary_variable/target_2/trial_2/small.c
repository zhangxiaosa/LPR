#include <stdio.h>

int fn2(int p1, int p2) { return p1; }
long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
int w = 0xDC6F3D13L;
int ag3;
int ah;
int ak;
int ap32;

int main() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      ag3 = ~(fn2(ap32, 1)) && 0x57;
      if (w) {
        v = 0x41AEA787L;
      }
    }
    break;
  }
  printf("checksum = %d\n", v);
  return 0;
}
