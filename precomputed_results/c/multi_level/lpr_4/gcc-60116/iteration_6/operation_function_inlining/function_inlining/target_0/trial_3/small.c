#include <stdint.h>
#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int64_t fn8(int p1, int64_t p2) { return p1 + p2; }

int main() {
  int au_0;
  for (int ak = 0;;) {
    for (int ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787L;
        ag3 = au_0;
      } else
        ag3 = au_0;
    }
    return 0;
  }
  printf("checksum = %d\n", v);
  return 0;
}