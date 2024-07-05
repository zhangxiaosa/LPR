#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int64_t fn2(int64_t p1, int64_t p2) { return p1 && p2 ? p1 : p1 % p2; }
int64_t fn8(int p1, int64_t p2) { return p1 + p2; }
int64_t v;
int64_t w = 0xDC6F3D13L;
long long ag3;
int64_t ah;
int64_t ak;
int64_t ap32;

int main() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int64_t temp = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = temp;
      } else
        ag3 = temp;
    }
    break;
  }
  printf("checksum = %" PRId64 "\n", v);
  return EXIT_SUCCESS;
}