#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(int p1, int p2) { return p2; }
int fn5(char p1, int p2) { return p2; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p2; }
unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned int q;
int v;
unsigned int w = 0xDC6F3D13L;
long long ag[4];
int ah;
int aj;
long ak;
unsigned int al;
int am = 0x41AEA787L;
int ao;
unsigned int ap;
int aq;

int fn12() {
  long au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(4UL, fn6(aq, fn5(aj, au_0 = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57))) > 2)) {
        v = am;
        ag[3] = au_0;
      } else {
        ao = au_0;
      }
    }
    return al;
  }
}

int main() {
  fn12();
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}