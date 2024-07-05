#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned fn6(unsigned p1, unsigned p2) { return p2; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }

unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag3;
short ah;
char ai;
long aj;
long ak;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

int main() {
  char as = 4UL;
  short at = 1L;
  int au5;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (fn7(as, fn6(aq, fn5(ai, au5 = (aj + (ak + at)))) > 2)) {
        v = am;
        ag3 = au5;
      }
      else
        ao = au5;
    break;
  }

  q = v;
  printf("checksum = %X\n", q);
  return 0;
}