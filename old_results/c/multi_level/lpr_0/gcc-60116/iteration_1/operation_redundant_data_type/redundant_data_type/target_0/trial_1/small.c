#include <stdio.h>

short int fn2(short int p1, short int p2) { return p1 && p2 ? p1 : p1 % p2; }
long int fn3(long int p1, long int p2) { return p2; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p2; }
unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }
long long int fn8(long int p1, long long int p2) { return p1 + p2; }

int v;
unsigned int w = 0xDC6F3D13L;
long long int ag[4];
short int ah;
long int ak;
unsigned int am = 0x41AEA787L;
int ao;
unsigned int ap;
unsigned int aq;

int main() {
  int au_1[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(4UL, fn6(static_cast<unsigned int>(aq), au_1[4][1][5] = fn8(~(fn3(ak, fn2(ap, 1L)) != 0), ak) && 0x57L)) > 2)) {
        v = am;
        ag[3] = au_1[4][1][5];
      }
      else
        ao = au_1[4][1][5];
    break;
  }
  printf("checksum = %ld\n", v);
  return 0;
}