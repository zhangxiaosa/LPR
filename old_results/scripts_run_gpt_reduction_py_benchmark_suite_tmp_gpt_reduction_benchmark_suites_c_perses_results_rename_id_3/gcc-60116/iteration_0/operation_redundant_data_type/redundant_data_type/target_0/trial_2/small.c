#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn4(char p1, char p2) { return p1; }

char fn5(char p1, int p2) { return p2; }

unsigned fn6(unsigned p1, unsigned p2) { return p2; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long long p1, long long p2) { return p1 + p2; }

unsigned q;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long long ak;
unsigned al;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;

void fn12() {
  unsigned long as = 4UL;
  long at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >= (unsigned)(as, (unsigned)(aq, (char)(ai, au[4][1][5] = (long long)(!(char)(!(aj != 0), an), ak) && 0x57L))) > 2) {
        v = (int)am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  fn12();
  q = (unsigned)v;
  printf("checksum = %X\n", (unsigned)q);
  return 0;
}