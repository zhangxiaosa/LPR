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

short ah;
char ai;

long fn12() {
  short at = 1L;
  for (long ak = 0;;) {
    for (ah = 0; ah <= 3; ah += 1)
      if (w >=
          (fn7(4U, fn6(5U, fn5(ai, fn8(fn4(fn3(7L, fn2(8U, at)), 9), 0x57L)))) > 2) {
        v = 0x41AEA787L;
      } else {
        // ao = au_4_1_5;
      }
    return 10U;
  }
}

int main() {
  fn12();
  q = v;
  fn1(q, 0);
  return 0;
}