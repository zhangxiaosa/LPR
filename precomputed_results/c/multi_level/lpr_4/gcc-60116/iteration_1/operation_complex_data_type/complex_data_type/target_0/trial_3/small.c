#include <stdio.h>

int fn2(int p1, int p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(int p1, int p2) {
  return p2;
}

int fn5(char p1, int p2) {
  return p2;
}

int fn6(int p1, int p2) {
  return p2;
}

int fn7(int p1, int p2) {
  return p1;
}

long long fn8(long p1, long long p2) {
  return p1 + p2;
}

int q;
int v;
unsigned w = 0xDC6F3D13L;

long long ag_1;
long long ag_2;
long long ag_3;
long long ag_4;

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
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn7(4UL, fn6(aq, fn5(aj, au_0 = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) && 0x57))) > 2) {
        v = am;
        if (ah == 0)
          ag_1 = au_0;
        else if (ah == 1)
          ag_2 = au_0;
        else if (ah == 2)
          ag_3 = au_0;
        else if (ah == 3)
          ag_4 = au_0;
      } else
        ao = au_0;
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
