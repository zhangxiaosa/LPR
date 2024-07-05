#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

short fn2(short p1, short p2) {
  return p1 && p2 ? p1 : p1 % p2;
}

long fn3(long p1, long p2) {
  return p2;
}

char fn4(char p1, char p2) {
  return p1;
}

char fn5(char p1, int p2) {
  return p2;
}

unsigned fn6(unsigned p1, unsigned p2) {
  return p2;
}

unsigned fn7(unsigned p1, unsigned p2) {
  return p1;
}

long long fn8(long long p1, long long p2) {
  return p1 + p2;
}

unsigned f;

void fn9(p1) {
  f = p1;
}

void fn10(p1) {
  fn9(p1);
}

void fn11(long long p1, char *p2, int p3) {
  fn10(p1);
}

int main() {
  int av = 0;
  fn12();
  fn11(v, "g_3", av);
  fn1(q, av);
  return 0;
}
