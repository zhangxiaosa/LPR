#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int main() {
  int v = 0x41AEA787L;
  int w = 0xDC6F3D13L;
  long long ag3 = 0;
  int ah = 0;
  int ak = 0;
  int ap32 = 0;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int temp = ~(fn2(ap32, 1) != 0) + ak && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp;
      } else {
        ag3 = temp;
      }
    }
    break;
  }
  printf("checksum = %lld\n", ag3);
  return 0;
}