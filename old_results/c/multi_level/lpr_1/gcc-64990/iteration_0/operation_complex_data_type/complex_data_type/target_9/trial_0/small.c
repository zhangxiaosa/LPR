#include <stdio.h>

int c;
unsigned d;

short g_new = (short)0x7EBA;
unsigned h = 0xCA;
short i = 0;
int j[5][5] = {{0}};
unsigned k = 0xAF7C65D6;
unsigned l = 0;
unsigned m[9][2][3] = {{{0}}};
int n = 0;

unsigned fn1(int p1, short p2, int p3, int p4);
int fn2(int p1);

unsigned fn3() {
  fn1(fn2(0), 7, 7, 0);
  return n;
}

unsigned fn1(int p1, short p2, int p3, int p4) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

int fn2(int p1) {
  unsigned v[6][3][2] = {{{0}}};
  int w = (int)0x709BFC8A;
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][0][0];
  }
  if (h)
    ;
  else
    return j[g_new][g_new];
  for (; p1;)
    ;
  return w;
}

int main() {
  fn3();
}