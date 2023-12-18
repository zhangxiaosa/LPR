#include <stdio.h>

static short g_new = 0x7EBA;
short i;
unsigned m[9][2][3];

unsigned fn1(int, short, int, int);
int fn2();

unsigned fn3() {
  fn1(fn2(), 7, 7, 0);
  return 0;
}

unsigned fn1(int p1, short p2, int p3, int p4) {
  m[1][0][1] = p1;
  return 2;
}

int fn2() {
  for (;;) ; // Infinite loop
  return 0;
}

int main() {
  fn3();
  return 0;
}