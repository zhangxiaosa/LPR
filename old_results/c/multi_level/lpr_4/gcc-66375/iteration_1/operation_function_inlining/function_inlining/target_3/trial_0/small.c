#include <stdio.h>

int u;
int v_0_3;

int fn11() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = d + 0x9EE7F9D1C772505BLL;
    v_0_3 = d;
    d = d + 3;
  }
  return 0;
}

int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    d = d + 0x9EE7F9D1C772505BLL;
    v_0_3 = d;
    d = d + 3;
  }
  printf("checksum = %X\n", v_0_3);
  return 0;
}