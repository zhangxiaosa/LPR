#include <stdio.h>

int u;
int v_00;

int main() {
  int d = 2L;

  for (; u < 51; ++u) {
    int temp2 = (v_00 = 4L);
    d = temp2 + 3;
  }

  printf("checksum = %X\n", v_00);
  return 0;
}
