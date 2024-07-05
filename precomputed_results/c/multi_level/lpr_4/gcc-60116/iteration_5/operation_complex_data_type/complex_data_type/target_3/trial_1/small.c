#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long long fn8(int p1, long long p2) { return p1 + p2; }

int v;
int w = 0xDC6F3D13L;
long long ag0, ag1, ag2, ag3;
int ah;
int ak;
int ap;

int fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int temp1 = fn2(ap, 1);
      int temp2 = ~(temp1 != 0);
      int temp3 = fn8(temp2, ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp3;
      } else
        ag3 = temp3;
    }
    return 0;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}