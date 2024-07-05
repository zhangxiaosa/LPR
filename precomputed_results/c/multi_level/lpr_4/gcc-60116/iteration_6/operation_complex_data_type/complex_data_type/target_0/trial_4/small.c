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
int32_t ap;

int32_t fn12() {
  int32_t au_0 = ~(fn2(ap, 1) != 0) && 0x57;
  v = w != 0 ? 0x41AEA787L : 0;
  return 0;
}

int32_t main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}