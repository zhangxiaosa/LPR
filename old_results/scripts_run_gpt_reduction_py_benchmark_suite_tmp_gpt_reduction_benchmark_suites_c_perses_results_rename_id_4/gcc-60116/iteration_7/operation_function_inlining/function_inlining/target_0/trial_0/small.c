#include <stdint.h>
#include <stdio.h>

int32_t v;
int32_t w = 0xDC6F3D13L;
int32_t ap32;

int32_t fn12() {
  for (int32_t ah = 0; ah <= 3; ah += 1) {
    int32_t temp = (~(ap32 && 1) != 0) + ah && 0x57;
    if (w) {
      v = 0x41AEA787L;
      v = temp;
    } else {
      v = temp;
    }
  }

  printf("checksum = %d\n", v);
  return 0;
}

int32_t main() {
  fn12();
  return 0;
}