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

void fn5(unsigned p1) {
  p = p1;
}

void fn7(unsigned p1, char *p2, int p3) {
  fn5(p1);
}

unsigned t;
unsigned u;
unsigned v[1][4];
unsigned fn8(char p1, int p2);
unsigned fn9(unsigned p1, int p2, unsigned p3, int p4);
int fn10(int p1, unsigned p2, unsigned p3, int p4);
int fn11() {
  char a = 0xFBL;
  int b = 0L;
  fn8(t, a);
  return b;
}

unsigned fn8(char p1, int p2) {
  fn9(p2, t, 18446744073709551613UL, t);
  return p1;
}

unsigned fn9(unsigned p1, int p2, unsigned p3, int p4) {
  fn10(6, 255UL, 1, p1);
  return p2;
}

int fn10(int p1, unsigned p2, unsigned p3, int p4) {
  int d = 2L;
  unsigned e0 = 0x9EE7F9D1C772505B;
  unsigned e1 = 0x9EE7F9D1C772505B;
  unsigned e2 = 0x9EE7F9D1C772505B;
  unsigned e3 = 0x9EE7F9D1C772505B;
  unsigned e4 = 0x9EE7F9D1C772505B;
  unsigned e5 = 0x9EE7F9D1C772505B;
  unsigned e6 = 0x9EE7F9D1C772505B;
  unsigned e7 = 0x9EE7F9D1C772505B;
  unsigned e8 = 0x9EE7F9D1C772505B;

  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e0);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e1);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e2);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e3);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e4);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e5);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e6);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e7);
  d = fn4(fn2(v[0][3] = fn3(4L, d), 3), e8);

  return 3;
}

int main() {
  int i, j;
  int f = 0;
  fn11();
  for (i = 0; i < 1; i++) {
    for (j = 0; j < 4; j++) {
      fn7(v[i][j], "g_1729[i][j]", f);
    }
  }
  printf("checksum = %X\n", p);
  return 0;
}