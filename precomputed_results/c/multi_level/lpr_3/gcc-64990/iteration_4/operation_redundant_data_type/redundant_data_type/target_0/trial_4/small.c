#include <stdio.h>

static int g = 0x7EBA;
int h = 0xCA;
int i;
static int l;
int m[9][2][3];

int fn1(p1) {
  if (p1) {
  } else
    m[1][0][1] = 0;
  return 2;
}

int fn2(p1) {
  int v[6][3][2];
  if (i == 1)
    return v[g][l][l];
  if (h) {
  } else
    return g;
  return 0x709BFC8A;
}

int fn3() {
  fn1(fn2(0));
  return 0;
}

int main() {
  fn3();
}