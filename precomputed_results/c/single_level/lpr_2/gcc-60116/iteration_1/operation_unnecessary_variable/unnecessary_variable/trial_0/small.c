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
void fn10(p1) { q = p1; }
void fn11(long p1, char *p2, int p3) { fn10(p1); }
int v;
unsigned w = 0xDC6F3D13L;
long long ag[4];
short ah;
char ai;
long aj;
long ak;
int am = 0x41AEA787L;
int ao;

int main() {
  unsigned v_w = 0xDC6F3D13L;
  long long v_ag_3 = 0;
  int v_am = 0x41AEA787L;

  for (long v_ak = 0;;) {
    short v_ah;

    for (v_ah = 0; v_ah <= 3; v_ah += 1) {
      if (v_w >= (fn7(4UL, fn6(0, fn5(0, 0)) & 0x57L) > 2)) {
        v = v_am;
        v_ag_3 = 0;
      } else {
        ao = 0;
      }

    }

    break;
  }

  fn11(v, "g_3", 0);
  fn1(q, 0);
  return 0;
}