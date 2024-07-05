#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }

long fn3(long p1, long p2) { return p2; }

char fn5(char p1, int p2) { return 0x41AEA787L; }

unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }

unsigned fn7(unsigned p1, unsigned p2) { return p1; }

long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int main() {
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (4UL >>
           (fn6(aq, 0x41AEA787L)))) {
        v = 0x41AEA787L;
        ag[3] = 0x41AEA787L;
      } else
        ao = 0x41AEA787L;
    return 0xDC6F3D13L;
  }

  f = v;
  printf("checksum = %X\n", f);
  return 0;
}