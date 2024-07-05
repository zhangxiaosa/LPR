#include <stdio.h>

char fn2(char p1, int p2) { return p1; }

int u;
int d_temp;

int fn11() {
  d_temp = 2L;
  char d = (char)d_temp;

  int temp_u = u;

  for (; temp_u < 51; ++temp_u) {
    d_temp = fn2(d_temp, 3) + 0x9EE7F9D1C772505BLL;
    d = (char)d_temp;
  }

  u = temp_u;

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", d_temp);
  return 0;
}