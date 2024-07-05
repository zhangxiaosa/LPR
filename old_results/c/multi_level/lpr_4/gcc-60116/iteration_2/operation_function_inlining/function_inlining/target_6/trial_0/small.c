#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(int p1, int p2) { return p2; }

int fn5(char p1, int p2) { return p2; }

int fn7(int p1, int p2) { return p1; }

int q;
int v;
unsigned w = 0xDC6F3D13L;
long ag[4];
int ah;
int aj;
long ak;
int al;
int am = 0x41AEA787L;
int ao;
int ap;
int aq;

int fn12() {
  long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn5(aj, au_0 = (~(fn3(aj, fn2(ap, 1L)) != 0) != 0), ak) &&
                                        0x57)) > 2)) {
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
  printf("checksum = %d\n", q);
  return 0;
}