#include <stdio.h>

short fn2(short p1, short p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }
unsigned f;
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
long aj;
long ak;
int am = 0x41AEA787L;
char an;
unsigned ap;

int main() {
  short at = 1L;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      int au_4_1_5 = fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an), ak) && 0x57L;
      if (w) {
        v = am;
        ag[3] = au_4_1_5;
      } else
        ag[3] = au_4_1_5;
    }
    break;
  }
  f = v;
  printf("checksum = %X\n", f);
  return 0;
}