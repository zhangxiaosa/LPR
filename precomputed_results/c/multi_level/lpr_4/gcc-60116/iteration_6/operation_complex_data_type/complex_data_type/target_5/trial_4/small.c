#include <stdint.h>
#include <stdio.h>

int32_t fn2(int32_t p1, int32_t p2) { return p1 && p2 ? p1 : p1 % p2; }

int32_t fn8(int32_t p1, int32_t p2) { return p1 + p2; }

int32_t v;
int32_t w = 0xDC6F3D13L;
int32_t ag3;
int32_t ah;
int32_t ak;
int32_t ap;
int32_t ap32;

int32_t fn12() {
  int32_t au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = au_0;
      } else
        ag3 = au_0;
    }
    return 0;
  }
}

int32_t main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}