#include <stdio.h>

char fn2(char p1, int p2) {
  return p1;
}

int u = 0; 

int v_0_3;

int fn11() {
  int d_temp = 2L;
  char d = (char) d_temp;

  d_temp = fn2(v_0_3 = (int) d_temp, 3) + 0x9EE7F9D1C772505BLL;
  d = (char) d_temp;

  return 0;
}

int main() {
  fn11();
  printf("checksum = %X\n", v_0_3);
  return 0;
}