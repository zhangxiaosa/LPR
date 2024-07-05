#include<stdio.h>

int fn3(int p1, int p2) { return p2; }

int fn4(int p1, int p2) { return p1 + p2; }

int main() {
  int u = 0;
  int v_00;
  int d = 2L;
  for (; u < 51; ++u) {
    int p1 = 3;
    int p2 = 0x9EE7F9D1C772505BLL;
    int p2_inner = d;
    int v_00_inner = 4L;
    v_00 = fn3(v_00_inner, p2_inner);
    d = fn4(v_00, p2);
  }
  printf("checksum = %X\n", v_00);
  return 0;
}