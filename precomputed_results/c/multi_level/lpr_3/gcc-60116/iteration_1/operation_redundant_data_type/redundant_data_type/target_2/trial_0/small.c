#include <stdio.h>

long q;
long v;
long w = 0xDC6F3D13L;
long ag[4];
long ah;
long ai;
long aj;
long ak;
long al;
long am = 0x41AEA787L;
long an;
long ao;
long ap;
long aq;

long fn2(long p1, long p2) { return p1 && p2 ? p1 : p1 % p2; }
signed fn3(long p1, long p2) { return p2; }
long fn4(long p1, long p2) { return p1; }
long fn5(long p1, long p2) { return p2; }
long fn6(long p1, long p2) { return p2; }
long fn7(long p1, long p2) { return p1; }
long fn8(long p1, long p2) { return p1 + p2; }

signed fn12() {
  long au[5][2][10];
  for (ak = 0L;;) {
    for (ah = 0L; ah <= 3L; ah += 1L)
      if (w >=
          (fn7(4L, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~fn4(fn3(aj, fn2(ap, 1L)) != 0L, an),
                                            ak) &&
                                        0x57L))) > 2L)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = (long)au[4][1][5];
    return al;
  }
}

signed main() {
  fn12();
  q = v;
  printf("checksum = %ld\n", q);
  return 0;
}