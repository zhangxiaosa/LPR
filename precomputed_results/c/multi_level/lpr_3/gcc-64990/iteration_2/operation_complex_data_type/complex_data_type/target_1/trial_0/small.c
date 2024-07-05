#include <stdio.h>

short g = 0x7EBA;
int h;
short i = 0;
int j_new[5][5] = {{0}};
unsigned k = 0xAF7C65D6L;
static unsigned l = 0;
unsigned m[9][2][3] = {{{0}}};

unsigned fn1(int p1, int p2);
int fn2(int p1);
unsigned fn3() {
  fn1(fn2(0), 7);
  return 0;
}

unsigned fn1(int p1, int p2) {
  p1 || (m[1][0][1] = 0);
  return 2;
}

int fn2(p1) {
  unsigned v[6][3][2] = {{{0}}};
  for (i = 0;;) {
    if (k)
      break;
    return v[g][l + 1][l];
  }
  if (h)
    ;
  else
    return j_new[g][g];
  for (; p1;) {
  }
  return 0x709BFC8A;
}

int main() {
  fn3();
}