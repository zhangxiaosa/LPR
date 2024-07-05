#include <stdio.h>

short fn2(short fn2_p1, short fn2_p2) {
  return (fn2_p1 && fn2_p2) ? fn2_p1 : fn2_p1 % fn2_p2;
}

long fn3(long fn3_p1, long fn3_p2) {
  return fn3_p2;
}

char fn4(char fn4_p1, char fn4_p2) {
  return fn4_p1;
}

unsigned fn6(unsigned fn6_p1, unsigned fn6_p2) {
  return fn6_p2;
}

unsigned fn7(unsigned fn7_p1, unsigned fn7_p2) {
  return fn7_p1;
}

long long fn8(long fn8_p1, long long fn8_p2) {
  return fn8_p1 + fn8_p2;
}

int v;

unsigned long w = 0xDC6F3D13L;

long long ag[4];

short ah;

long ak;

unsigned al;

unsigned am = 0x41AEA787L;

char an;

int ao;

unsigned ap;

unsigned aq;

unsigned fn12() {
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(as, fn6(aq, au[4][1][5] = fn8(~fn4(fn3(ak, fn2(ap, at)) != 0, an), ak) && 0x57L)) > 2)) {
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
  printf("checksum = %d\n", v);
  return 0;
}