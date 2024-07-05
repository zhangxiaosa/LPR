#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_0_3;

int fn11() {
  int d = 2L;
  int p2 = 0x9EE7F9D1C772505BLL;
  for (; u < 51; ++u)
    d = fn4(fn2(v_0_3 = d, 3), p2);
  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}