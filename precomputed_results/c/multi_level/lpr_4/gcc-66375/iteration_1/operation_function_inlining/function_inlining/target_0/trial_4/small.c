#include <stdio.h>

int u;
int v_0_3;

int main() {
  int d = 2L;

  for (; u < 51; ++u)
    d = (v_0_3 = d) + 0x9EE7F9D1C772505BLL;

  printf("checksum = %X\n", v_0_3);
  return 0;
}