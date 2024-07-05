#include <stdio.h>

long fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
long fn5(char p1, long p2) { return p2; }
long fn6(long p1, long p2) { return p2; }
long fn7(long p1, long p2) { return p1; }
long fn8(long p1, long p2) { return p1 + p2; }

long q;
long v;
long w = 0xDC6F3D13L;
long ag[4];
long ah;
long aj;
long ak;
long al;
long am = 0x41AEA787L;
long ao;
long ap;
long aq;

long fn12() {
  long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4L, fn6(aq, fn5(aj, au_0 = fn8(~(fn3(aj, fn2(ap, 1L)) != 0L), ak)) && 0x57L))) {
        v = am;
        ag[3] = au_0;
      } else {
        ao = au_0;
      }
    return al;
  }
}

long main() {
  fn12();
  q = v;
  printf("checksum = %ld\n", q);
  return 0L;
}