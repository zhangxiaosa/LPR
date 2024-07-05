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
void fn9(p1) { q = p1; }
void fn10(p1) { fn9(p1); }
void fn11(long p1, char *p2, int p3) { fn10(p1); }
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
char an;
int ao;
unsigned ap;
int aq;
int au0_0_0;
int au0_0_1;
int au0_0_2;
int au0_0_3;
int au0_0_4;
int au0_0_5;
int au0_0_6;
int au0_0_7;
int au0_0_8;
int au0_0_9;
int au0_1_0;
int au0_1_1;
int au0_1_2;
int au0_1_3;
int au0_1_4;
int au0_1_5;
int au0_1_6;
int au0_1_7;
int au0_1_8;
int au0_1_9;
int au1_0_0;
int au1_0_1;
int au1_0_2;
int au1_0_3;
int au1_0_4;
int au1_0_5;
int au1_0_6;
int au1_0_7;
int au1_0_8;
int au1_0_9;
int au1_1_0;
int au1_1_1;
int au1_1_2;
int au1_1_3;
int au1_1_4;
int au1_1_5;
int au1_1_6;
int au1_1_7;
int au1_1_8;
int au1_1_9;
int au2_0_0;
int au2_0_1;
int au2_0_2;
int au2_0_3;
int au2_0_4;
int au2_0_5;
int au2_0_6;
int au2_0_7;
int au2_0_8;
int au2_0_9;
int au2_1_0;
int au2_1_1;
int au2_1_2;
int au2_1_3;
int au2_1_4;
int au2_1_5;
int au2_1_6;
int au2_1_7;
int au2_1_8;
int au2_1_9;
int au3_0_0;
int au3_0_1;
int au3_0_2;
int au3_0_3;
int au3_0_4;
int au3_0_5;
int au3_0_6;
int au3_0_7;
int au3_0_8;
int au3_0_9;
int au3_1_0;
int au3_1_1;
int au3_1_2;
int au3_1_3;
int au3_1_4;
int au3_1_5;
int au3_1_6;
int au3_1_7;
int au3_1_8;
int au3_1_9;

long fn12() {
  char as = 4UL;
  short at = 1L;
  int au[5][2][10];
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(as, fn6(aq, fn5(ai, au[4][1][5] =
                                       fn8(~fn4(fn3(aj, fn2(ap, at)) != 0, an),
                                           ak) &&
                                       0x57L))) > 2)) {
        v = am;
        ag[3] = au[4][1][5];
      } else
        ao = au[4][1][5];
    return al;
  }
}

int main() {
  int av = 0;
  fn12();
  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}