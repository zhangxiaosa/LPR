#include <stdio.h>

int fn2(int p1, long p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn8(long p1, long p2) {
  return p1 + p2;
}

long v;
long w = 0xDC6F3D13L;
long ag[4];
int ah;
int ak;
int al;
long ao;
long ap;

long fn12() {
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      long au_0 = fn8(~(fn2(ap, 1) != 0), ak) && 0x57;
      if (w != 0) {
        return 0x41AEA787L;
      } else {
        ag[3] = au_0;
      }
      ao = au_0;
    }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %ld\n", v);
  return 0;
}