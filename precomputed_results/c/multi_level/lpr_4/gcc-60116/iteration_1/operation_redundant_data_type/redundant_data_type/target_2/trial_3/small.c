#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
long long fn3(long long p1, long long p2) { return p2; }
long long fn5(char p1, long long p2) { return p2; }
unsigned long long fn6(unsigned long long p1, unsigned long long p2) { return p2; }
unsigned long long fn7(unsigned long long p1, unsigned long long p2) { return p1; }
long long fn8(long long p1, long long p2) { return p1 + p2; }

unsigned long long q;
long long v;
unsigned long long w = 0xDC6F3D13L;
long long ag[4];
int ah;
long long aj;
long long ak;
unsigned long long al;
long long am = 0x41AEA787L;
long long ao;
unsigned long long ap;
long long aq;

long long fn12() {
  long long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4ULL,
               fn6(aq, fn5(aj, au_0 = fn8(~(fn3(aj, fn2(ap, 1LL)) != 0), ak) &&
                                      0x57))) > 2)) {
        v = am;
        ag[3] = au_0;
      } else
        ao = au_0;
    return al;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %llu\n", q);
  return 0;
}