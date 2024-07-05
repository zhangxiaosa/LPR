#include <stdio.h>

unsigned fn2(unsigned p1, unsigned p2) { return p1 && p2 ? p1 : p1 % p2; }
unsigned long fn3(unsigned p1, unsigned p2) { return p2; }
unsigned fn5(char p1, unsigned p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
unsigned long long fn8(unsigned p1, unsigned long long p2) { return p1 + p2; }

unsigned q;

unsigned v;

unsigned w;

unsigned long long ag[4];

unsigned ah;

unsigned aj;

unsigned long ak;

unsigned al;

unsigned am;

unsigned ao;

unsigned ap;

unsigned aq;

unsigned fn12() {
  unsigned long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL,
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
  printf("checksum = %u\n", q);
  return 0;
}