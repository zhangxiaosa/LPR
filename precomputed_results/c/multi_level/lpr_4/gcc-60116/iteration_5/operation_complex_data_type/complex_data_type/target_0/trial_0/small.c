#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long long fn8(int p1, long long p2) {
  return p1 + p2;
}

int v;
int w = 0xDC6F3D13L;
int ag0;
int ag1;
int ag2;
int ag3;
int ah;
int ak;
int ap;

int fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = au_0;
      } else {
        ag3 = au_0;
      }
    }
    return 0;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}