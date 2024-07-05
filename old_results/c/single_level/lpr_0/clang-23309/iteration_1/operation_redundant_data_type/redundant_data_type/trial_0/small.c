#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

int fn2(int p1, int p2) {
  return p1 - p2;
}

long fn3(long p1, long p2) {
  return p1 - p2;
}

unsigned char fn4(unsigned char p1, unsigned char p2) {
  return p1;
}

unsigned fn5(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p1 - p2;
}

unsigned p;

void fn7(unsigned p1) {
  p = p1;
}

void fn8(unsigned p1) {
  fn7(p1);
}

void fn9(unsigned p1, char* p2, int p3) {
  fn8(p1);
}

int main() {
  int ap = 0;
  fn10(u, t);
  fn9(v, "g_170", ap);
  fn1(p, ap);
  return 0;
}