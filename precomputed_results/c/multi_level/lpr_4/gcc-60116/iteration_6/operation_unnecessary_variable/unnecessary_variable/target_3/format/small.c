#include <stdint.h>
#include <stdio.h>

int32_t fn2(int32_t p1, int32_t p2) { return p1 && p2 ? p1 : p1 % p2; }

int64_t fn8(int32_t p1, int64_t p2) { return p1 + p2; }

int32_t v;
int32_t w = 0xDC6F3D13L;
int64_t ag3;
int32_t ah;
int32_t ak;
int32_t ap32;

int32_t fn12() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int32_t temp = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp;
      } else
        ag3 = temp;
    }
    return 0;
  }
}

int32_t main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}