#include <stdint.h>
#include <stdio.h>

int32_t fn2(int32_t p1, int32_t p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

int64_t fn8(int32_t p1, int64_t p2) {
  return p1 + p2;
}

int32_t v;
int32_t w = 0xDC6F3D13L;
int64_t ag3;
int32_t ah;
int32_t ak;
int32_t ap32;

int32_t main() {
  ak = 0;

  // Unrolled loop
  {
    int32_t temp_0 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_0;
    } else {
      ag3 = temp_0;
    }

    int32_t temp_1 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_1;
    } else {
      ag3 = temp_1;
    }

    int32_t temp_2 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_2;
    } else {
      ag3 = temp_2;
    }

    int32_t temp_3 = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
    if (w) {
      v = 0x41AEA787L;
      ag3 = temp_3;
    } else {
      ag3 = temp_3;
    }
  }

  printf("checksum = %d\n", v);
  return 0;
}