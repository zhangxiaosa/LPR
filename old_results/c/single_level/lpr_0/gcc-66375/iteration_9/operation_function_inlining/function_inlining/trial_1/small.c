#include <stdio.h>

int fn3(int p1, int p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int u;
int v_00;

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    v_00 = fn3(4L, d);
    v_00 = v_00;
    d = fn4(v_00, 3);
    d = d;
    d = fn4(d, 0x9EE7F9D1C772505BLL);
    d = d;
  }
  printf("checksum = %X\n", v_00);
  return 0;
}