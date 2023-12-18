#include <stdio.h>
int q;
int v;
unsigned w = 0xDC6F3D13L;long fn3(int p1, int p2) { return p2; }

int fn7(int p1, int p2) { return p1; }

int fn5(char p1, int p2) { return p2; }

int main() {
  long long ag[4];
  long au_0;
  int ah;
  int aj;
  long ak;
  int al;
  int am = 0x41AEA787L;
  int ao;
  int ap;
  int aq;
  ak = 0;
  for (ah = 0; ah <= 3; ah += 1)
    if (w >= (fn7(4UL, fn6(aq, fn5(aj, ( ~(fn3(aj, ap % 1L) != 0) + ak ) && 0x57))) > 2)) {
      v = am;
      ag[3] = ( ~(fn3(aj, ap % 1L) != 0) + ak );
    } else
      ao = ( ~(fn3(aj, ap % 1L) != 0) + ak );
  q = v;
  printf("checksum = %d\n", q);
  return 0;
}