#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
int fn5(int p1, int p2) { return 1110486715; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;

long long ag_3; // Decomposed variable for ag[3]

int ah;
int ai;
long ak;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int au_0_0_0;
  int au_0_0_1;
  int au_0_0_2;
  int au_0_0_3;
  int au_0_0_4;
  int au_0_1_0;
  int au_0_1_1;
  int au_0_1_2;
  int au_0_1_3;
  int au_0_1_4;
  int au_1_0_0;
  int au_1_0_1;
  int au_1_0_2;
  int au_1_0_3;
  int au_1_0_4;
  int au_1_1_0;
  int au_1_1_1;
  int au_1_1_2;
  int au_1_1_3;
  int au_1_1_4;
  int au_2_0_0;
  int au_2_0_1;
  int au_2_0_2;
  int au_2_0_3;
  int au_2_0_4;
  int au_2_1_0;
  int au_2_1_1;
  int au_2_1_2;
  int au_2_1_3;
  int au_2_1_4;
  int au_3_0_0;
  int au_3_0_1;
  int au_3_0_2;
  int au_3_0_3;
  int au_3_0_4;
  int au_3_1_0;
  int au_3_1_1;
  int au_3_1_2;
  int au_3_1_3;
  int au_3_1_4;
  int au_4_0_0;
  int au_4_0_1;
  int au_4_0_2;
  int au_4_0_3;
  int au_4_0_4;
  int au_4_1_0;
  int au_4_1_1;
  int au_4_1_2;
  int au_4_1_3;
  int au_4_1_4;

  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      if (w >= (fn6(aq, fn5(ai, au_4_1_5 = fn8(~(fn2(ap, 1L) != 0), ak) && 0x57L)) > 2)) {
        f = am;
        ag_3 = au_4_1_5; // Updated usage of ag[3]
      } else {
        ao = au_4_1_5;
      }
    }
    return f;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}