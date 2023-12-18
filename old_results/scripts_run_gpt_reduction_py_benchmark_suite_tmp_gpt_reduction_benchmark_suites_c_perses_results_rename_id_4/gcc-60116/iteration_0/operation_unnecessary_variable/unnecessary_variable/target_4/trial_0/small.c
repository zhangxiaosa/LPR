#include <stdio.h>

char fn5(char p1) { return 0; }
unsigned fn6(unsigned p1) { return 0; }
unsigned fn7(unsigned p1) { return 0; }

unsigned q;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

long fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn6(fn5(ai), au_0 = ~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57L))) {
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