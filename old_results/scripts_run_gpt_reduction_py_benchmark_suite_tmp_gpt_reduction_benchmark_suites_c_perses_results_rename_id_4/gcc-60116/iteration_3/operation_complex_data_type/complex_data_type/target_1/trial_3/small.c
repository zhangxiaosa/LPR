#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(int p1, int p2) { return p2; }

long long fn8(long p1, long long p2) { return p1 + p2; }

int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
int aj;
long ak;
int al;
int am = 0x41AEA787L;
int ao;
int ap;

int fn12() {
  long au_0;
  int temp1 = fn3(aj, fn2(ap, 1));
  int temp2 = temp1 != 0;
  int temp3 = ~(temp2);
  int temp4 = fn8(temp3, ak);
  au_0 = temp4 && 0x57;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w) {
        v = am;
        ag[3] = au_0;
      } else
        ao = au_0;
    }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %d\n", v);
  return 0;
}