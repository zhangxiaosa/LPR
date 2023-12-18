#include <stdio.h>

int fn2(int p1, int p2) { return p1 && p2 ? p1 : p1 % p2; }
long fn3(long p1, long p2) { return p2; }
char fn5(char p1, int p2) { return 0x41AEA787L; }
unsigned fn6(unsigned p1, unsigned p2) { return 0xDC6F3D13L; }
unsigned fn7(unsigned p1, unsigned p2) { return p1; }
long long fn8(long p1, long long p2) { return p1 + p2; }

unsigned f;
unsigned w = 0xDC6F3D13L;
long long ag[4];
int ah;
char ai;
long aj;
long ak;
unsigned al;
int am = 0x41AEA787L;
int ao;
unsigned ap;
int aq;

int fn12() {
  int temp_variable;
  for (ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1) {
      long p2 = fn3(aj, 1);
      unsigned p3 = fn6(aq, fn5(ai, temp_variable = fn8(~(p2 != 0), ak)) && 0x57);
      if (w >= fn7(4, p3) > 2) {
        f = am;
        ag[3] = p3;
      } else {
        ao = p3;
      }
    }
    return al;
  }
}

int main() {
  fn12();
  printf("checksum = %X\n", f);
  return 0;
}