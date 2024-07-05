#include <stdio.h>

short int fn2(short int p1, short int p2) { return p1 && p2 ? p1 : p1 % p2; }
long long int fn3(long long int p1, long long int p2) { return p2; }
char int fn5(char int p1, int p2) { return 0x41AEA787L; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return 0xDC6F3D13L; }
unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }
long long int fn8(long int p1, long long int p2) { return p1 + p2; }
unsigned int f;
unsigned int w = 0xDC6F3D13L;
long long int ag[4];
short int ah;
char int ai;
long int aj;
long int ak;
unsigned int al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

int fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(ai, au[4][1][5] =
                                        fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) &&
                                        0x57L))) > 2)) {
        f = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", (unsigned)f);
  return 0;
}