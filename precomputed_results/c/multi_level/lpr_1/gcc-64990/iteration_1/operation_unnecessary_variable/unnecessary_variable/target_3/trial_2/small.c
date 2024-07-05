#include <stdio.h>

static short g_new = 0x7EBA;
short i;
int j[5][5];
int k = 0xAF7C65D6L;
int m[9][2][3];

int fn1(int p1, short p2) {
  m[1][0][1] = p1;
  return 2;
}

int fn2(p1) {
  int v[6][3][2];
  for (; i < 6;) {
    if (k)
      break;
    return v[g_new][0][0];
  }
  return j[g_new][g_new];
}

int fn3() {
  fn1(fn2(0), 7);
  return 0;
}

int main() {
  fn3();
}
