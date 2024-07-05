#include <stdio.h>

int u;
int v_0_3;

int fn11() {
  int d_temp = 2L;

  int temp_u = u;

  for (; temp_u < 51; ++temp_u) {
    d_temp = (int)d_temp + 0x9EE7F9D1C772505BLL;
  }

  u = temp_u;

  return 0;
}

int main() {
  fn11();
  printf("checksum = %d\n", v_0_3);
  return 0;
}
