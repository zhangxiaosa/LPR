#include <stdio.h>

short fn2(char p1, char p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(char p1, char p2) { return p2; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(char p1, char p2) { return p2; }
unsigned fn7(char p1, char p2) { return p1; }
long long fn8(char p1, long long p2) { return p1 + p2; }
unsigned q;
char v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
char al;
int am = 0x41AEA787L;
char ao;
unsigned ap;
char aq;
long fn12() {
  int au_0;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4UL,
               fn6(aq, fn5(ai, au_0 = fn8(~(fn3(aj, fn2(ap, 1L)) != 0), ak) &&
                                      0x57L))) > 2)) {
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