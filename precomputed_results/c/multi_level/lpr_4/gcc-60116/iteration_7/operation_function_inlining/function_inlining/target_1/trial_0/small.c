#include <stdint.h>
#include <stdio.h>

int32_t fn8(int32_t p1, int64_t p2) { return p1 + p2; }

int32_t v;
int32_t w = 0xDC6F3D13L;
int64_t ag3;
int32_t ah;
int32_t ak;
int32_t ap32;

int32_t main() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int32_t temp = fn8(~(ap32 && 1 ? ap32 : ap32 % 1) && 0x57, ak);
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp;
      } else {
        ag3 = temp;
      }
    }
    break; // Exit the outer loop
  }

  printf("checksum = %d\n", v);
  return 0;
}