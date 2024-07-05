#include <stdint.h>
#include <stdio.h>

int32_t fn12() {
  int32_t ak;
  int32_t ah;
  int32_t ap32;
  int32_t v = 0;
  int32_t w = 0xDC6F3D13L;
  int64_t ag3;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int32_t temp = ((ap32 + ak) & 0xFFFFFFFF) % 0x100000000LL + ak;
      if (((ap32 & 0xFFFFFFFF) & 0x1) != 0) {
        temp = temp && 0x57;
      }
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp;
      } else {
        ag3 = temp;
      }
    }
    return 0;
  }
}

int32_t main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}