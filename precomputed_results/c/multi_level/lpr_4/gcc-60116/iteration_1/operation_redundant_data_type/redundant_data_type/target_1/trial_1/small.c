#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p2; }
int fn5(char p1, int p2) { return p2; }
int fn6(int p1, int p2) { return p2; }
int fn7(int p1, int p2) { return p1; }
int fn8(int p1, int p2) { return p1 + p2; }

unsigned q;
short v;
int w = 0xDC6F3D13L;
int ag[4];
int ah;
int aj;
int ak;
int al;
short am = 0x41AEA787L;
short ao;
int ap;
short aq;

int fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL, fn6(aq, fn5(aj, au_0 = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57))) > 2)) {
        v = (int)am;
        ag[3] = (int)au_0;
      } else
        ao = (int)au_0;
    return al;
  }
}

int main() {
  fn12();
  q = (unsigned)v;
  printf("checksum = %u\n", q);
  return 0;
}