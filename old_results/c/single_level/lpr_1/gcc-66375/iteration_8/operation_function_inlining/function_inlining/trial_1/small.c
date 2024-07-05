#include <stdio.h>

unsigned p;
unsigned u;
unsigned v_0_3;
int main() {
  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;
    d = v_0_3 = (short)(d) + e[0];
  }
  p = v_0_3;
  printf("checksum = %X\n", p);
  return 0;
}