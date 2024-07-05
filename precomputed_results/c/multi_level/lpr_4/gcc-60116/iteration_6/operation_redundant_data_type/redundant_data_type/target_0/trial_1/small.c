#include <stdint.h>
#include <stdio.h>
signed int fn2(signed int p1, signed int p2) { return p1 && p2 ? p1 : p1 % p2; }
int64_t fn8(signed int p1, int64_t p2) { return p1 + p2; }
int v;
signed int w = 0xDC6F3D13L;
int64_t ag3;
signed int ah;
signed int ak;
signed int ap;
signed int fn12() {
  signed int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = au_0;
      } else
        ag3 = au_0;
    }
    return 0;
  }
}
int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}