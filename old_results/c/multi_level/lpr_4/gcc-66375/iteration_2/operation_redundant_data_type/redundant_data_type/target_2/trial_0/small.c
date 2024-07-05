#include <stdio.h>

int u;
int v_0_3;

int fn11() {
  int d_temp = 2L;
  int d = (int)d_temp;

  int temp_u = u;

  for (; temp_u < 51; ++temp_u) {
    d_temp = (v_0_3 = (int)d_temp) + 0x9EE7F9D1C772505BLL;
    d = (int)d_temp;
  }

  u = temp_u;

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}