#include <iostream>

unsigned g = 0x7EBA;
int h = 0xCA;
int j_new[5][5];
unsigned k = 0xAF7C65D6L;
unsigned l;
unsigned m[9][2][3];

unsigned fn1(int, int);
int fn2(int);

unsigned fn3() {
  fn1(fn2(0), 7);
  return 0;
}

unsigned fn1(int p1, int p2) {
  if (p1)
    return 2;
  m[1][0][1] = 0;
  return 2;
}

int fn2(int) {
  unsigned v[6][3][2];

  if (k)
    return v[0][l + 1][l];
  if (!h)
    return j_new[0][0];
  return 0x709BFC8A;
}

int main() {
  fn1(fn2(0), 7);
  return 0;
}