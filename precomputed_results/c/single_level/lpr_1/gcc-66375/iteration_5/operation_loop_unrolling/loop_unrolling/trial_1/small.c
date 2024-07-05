#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

short fn3(short p1, short p2) {
  return p2;
}

unsigned fn4(unsigned p1, unsigned p2) {
  return p1 + p2;
}

unsigned p;

void fn5(unsigned p1) {
  p = p1;
}

unsigned u;
unsigned v_0_3;

short fn11() {
  int d = 2L;

  u = 0;

  unsigned e[9];
  e[0] = 0x9EE7F9D1C772505BLL;
  e[1] = e[0];
  e[2] = e[0];
  e[3] = e[0];
  e[4] = e[0];
  e[5] = e[0];
  e[6] = e[0];
  e[7] = e[0];
  e[8] = e[0];

  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);
  d = fn4(fn2(v_0_3 = fn3(4L, d), 3), e[0]);

  return 0;
}

int main() {
  fn11();

  fn5(v_0_3);

  printf("checksum = %X\n", p);

  return 0;
}