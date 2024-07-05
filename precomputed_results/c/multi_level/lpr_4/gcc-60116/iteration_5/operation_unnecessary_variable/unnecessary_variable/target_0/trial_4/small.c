#include <stdint.h>
#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int64_t fn8(int p1, int64_t p2) {
  return p1 + p2;
}

int v;
int w = 0xDC6F3D13L;
int64_t ag3;
int ah;
int ak;
int ap;

int fn12() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int tmp1 = fn2(ap, 1) != 0;
      int tmp2 = !tmp1;
      ag3 = fn8(tmp2, ak) & 0x57;
    }
    return 0;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}
