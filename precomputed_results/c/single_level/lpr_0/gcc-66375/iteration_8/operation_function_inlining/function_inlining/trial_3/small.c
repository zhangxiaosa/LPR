#include <stdio.h>

int fn3(int p1, int p2) { return p2; }
int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_00;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    int temp2 = (v_00 = fn3(4L, d));
    d = fn4(temp2, 0x9EE7F9D1C772505BLL);
  }
  printf("checksum = %X\n", v_00);
  return 0;
}