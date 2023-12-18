#include <inttypes.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int64_t fn8(int p1, int64_t p2) { return p1 + p2; }
int v;
int64_t ag3;
int ah;
int ak;
int ap32;

int64_t main() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int64_t temp = fn8(~(fn2(ap32, 1) != 0), ak) && 0x57;
      if (v) {
        v = INT64_C(0x41AEA787);
        ag3 = temp;
      } else
        ag3 = temp;
    }
    break;
  }
  printf("checksum = %" PRId64 "\n", v);
  return 0;
}