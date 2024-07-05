#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn5(char p1, int p2) { return 0x41AEA787L; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long f;
unsigned w = 0xDC6F3D13L;
long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

long long fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) &&
                                        0x57L))) > 2)) {
        f = (long long)am;
        ag[3] = (long)au[4][1][5];
      } else
        ao = (int)au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", (unsigned)f);
  return 0;
}