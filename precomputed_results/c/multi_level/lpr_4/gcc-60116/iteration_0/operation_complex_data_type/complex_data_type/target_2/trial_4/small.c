#include <stdio.h>

short fn2(short p1, short p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(long p1, long p2) {
  return p2;
}

char fn5(char p1, int p2) {
  return p2;
}

unsigned int fn6(unsigned int p1, unsigned int p2) {
  return p2;
}

unsigned int fn7(unsigned int p1, unsigned int p2) {
  return p1;
}

long fn8(long p1, long long p2) {
  return p1 + p2;
}

unsigned int q;
int v;
unsigned int w = 0xDC6F3D13L;
long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned int al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

long fn12() {
  char as = 4;
  short at = 1;
  int au[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, fn5(ai, au[4][1][5] = fn8(~(fn3(aj, fn2(ap, at)) != 0), ak) && 0x57)))) {
        v = am;
        ag[3] = au[4][1][5];
      } else {
        ao = au[4][1][5];
      }
    }
    return al;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %u\n", q);
  return 0;
}