#include <stdint.h>
#include <stdio.h>

int32_t v;
int32_t w = 0xDC6F3D13L;
int32_t ah;
int32_t ak;
int32_t ap;
int32_t ap32;

int32_t main() {
  printf("checksum = %d\n", v);
  return 0;
}