#include <stdio.h>

static int g = 0x7EBA;
int h = 0xCA;
int j_old[5][5];
static int l;

int fn1(int p1) {
  if (p1) {
  } else {
    j_old[1][0] = 0;
  }
  
  return 2;
}

int fn2(int p1) {
  int v_1[6][3][2];
  
  if (h) {
  } else {
    return j_old[g][g];
  }
  
  return 0x709BFC8A;
}

int fn3() {
  fn1(fn2(0));
  return 0;
}

int main() {
  fn3();
}