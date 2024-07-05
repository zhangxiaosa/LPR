#include <stdio.h>

long fn2(p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
long long fn8(long p1, long long p2) { return p1 + p2; }

v;
long w = 0xDC6F3D13L;
long long ag[4];

long ak;
long ap;

fn12() {
  long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w) {
        v = 0x41AEA787LL;
        ag[3] = au_0;
      }
      else
        ag[3] = au_0;
    }
  }
}

main() {
  fn12();
  printf("checksum = %lld\n", v);
  return 0;
}
