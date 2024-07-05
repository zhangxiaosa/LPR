#include <stdio.h>

int main() {
  int t;
  int u;
  int v_00;
  int d;
  int e[9];
  int i;
  short p1;
  short p2;
  char p3;
  int p4;
  int p5;

  d = 2L;
  for (u = 0; u < 51; ++u) {
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    p1 = 4L;
    d = p2;
    p2 = d;
    v_00 = p1 + 3;
    v_00 = v_00 + e[0];
  }

  p1 = 251L;
  p2 = 251L;
  t = p3;
  p4 = 18446744073709551613UL;
  t = p5;

  printf("checksum = %X\n", v_00);

  return 0;
}