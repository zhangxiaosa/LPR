#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8(long p1, long long p2) { return p1 + p2; }
unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag_3;
int ah;
int ak;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int fn12() {
  int au[5][2][10];
  long ag_3_low, ag_3_high;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn6(0, fn5(1110486715, (ag_3_low = fn8(~(fn2(ap, 1L) != 0), ak)) && 0x57L)) > 2)) {
        f = am;
        ag_3_high = (unsigned)(ag_3_low >> 32);
        ag_3_low = (unsigned)ag_3_low;
      } else
        ao = (ag_3_low = fn8(~(fn2(ap, 1L) != 0), ak)) && 0x57L;
    return f;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}
