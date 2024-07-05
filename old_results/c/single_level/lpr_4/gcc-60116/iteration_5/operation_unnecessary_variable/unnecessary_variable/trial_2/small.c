#include <stdio.h>

void fn1(unsigned p1, int p2) { printf("checksum = %X\n", p1); }

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

char fn5(char p1, int p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
int am = 0x41AEA787L;
unsigned al;

long fn12() {
  char as = 4UL;
  short at = 1L;
  int au_4_1_5;

  for (long ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int tmp_1 = ~fn4(fn3(aj, fn2(ap, at)) != 0, 4UL);
      int tmp_2 = fn6(aq, fn5(0, tmp_1) && 0x57L);

      if (w >= fn7(as, tmp_2) > 2) {
        v = am;
        au_4_1_5 = tmp_2;
      } else {
        ao = tmp_2;
      }
    }

    return al;
  }
}

int main() {
  fn12();
  q = v;
  fn1(q, 0);
  return 0;
}