#include <stdio.h>

static short g_new = 0x7EBA;
unsigned h = 0xCA;
short i;
int j[5][5];
unsigned k = 0xAF7C65D6L;
unsigned m[9][2][3];
int n;

unsigned fn1(int, short);
unsigned fn3();

unsigned fn1(int p1, short p2) {
  p1 || (m[1][0][1] = p1);
  return 2;
}

unsigned fn3() {
  fn1((k ? 0x709BFC8AL : j[g_new][g_new]), 7);
  return n;
}

int main() {
  fn1((k ? 0x709BFC8AL : j[g_new][g_new]), 7);
  return n;
}