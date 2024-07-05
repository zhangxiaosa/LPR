#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn3(int p1, int p2) { return p2; }
char fn4(char p1, char p2) { return p1; }
char fn5(char p1, int p2) { return p2; }
unsigned int fn6(unsigned int p1, unsigned int p2) { return p2; }
unsigned int fn7(unsigned int p1, unsigned int p2) { return p1; }
int fn8(int p1, long p2) { return p1 + p2; }

unsigned int f;
int v;
unsigned int w = 0xDC6F3D13L;
long ag[4];
int ah;
char ai;
int aj;
int ak;
int am = 0x41AEA787L;
char an;
unsigned int ap;
int aq;

int main() {
  char as = 4UL;
  int at = 1L;
  int au_4_1_5;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >=
          (fn7(as, fn6(aq, fn5(ai, au_4_1_5 =
                                       fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an),
                                           ak) &&
                                       0x57L))) > 2)) {
        v = am;
        ag[3] = au_4_1_5;
      } else {
        ag[3] = au_4_1_5;
      }
    }
    break;
  }

  f = v;
  printf("checksum = %X\n", f);
  return 0;
}