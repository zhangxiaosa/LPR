#include <stdio.h>

int checksum;

void fn11() {
  int d_temp = 2L;
  int temp_u = 0;

  for (; temp_u < 51; ++temp_u) {
    checksum = d_temp = d_temp + 0x9EE7F9D1C772505BLL;
  }
}

int main() {
  fn11();
  printf("checksum = %X\n", checksum);
  return 0;
}