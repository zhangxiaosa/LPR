#include <stdio.h>

int fn2(int p2) { return p2 ? 1 : 0; }

long long fn8(int p2) { return p1 + p2; }

int w = 0xDC6F3D13L;
long long ag3;
int ah;
int ak;
int ap32;

int main() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int temp = fn8(~(fn2(ap32) != 0), ak) && 0x57;
      if (w) {
        ag3 = temp;
      } else
        ag3 = temp;
    }
    break;
  }
  printf("checksum = %lld\n", ag3);
  return 0;
}