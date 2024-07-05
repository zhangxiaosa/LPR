#include<stdio.h>

char fn2(char p1, int p2) { return p1; }
int fn3(int p1, int p2) { return p2; }

unsigned u;
unsigned v_03;

int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    e[0] = 0x9EE7F9D1C772505BLL;
    d = (v_03 = fn3(4L, d)) + 3 + e[0];
  }
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_03);
  return 0;
}