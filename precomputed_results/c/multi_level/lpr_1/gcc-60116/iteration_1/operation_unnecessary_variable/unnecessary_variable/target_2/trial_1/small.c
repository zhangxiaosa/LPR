#include <stdio.h>

int fn2(int p1) { return p1; }
long fn3(long p1) { return p1; }
char fn5(char p1) { return 0x41AEA787L; }
unsigned fn6(unsigned p1) { return 0xDC6F3D13L; }
unsigned fn7(unsigned p1) { return p1; }
long long fn8(long p1) { return p1; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4, fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap)) != 0))) && 0x57L))) {
        f = am;
        ag[3] = au[4][1][5];
      }
      else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}