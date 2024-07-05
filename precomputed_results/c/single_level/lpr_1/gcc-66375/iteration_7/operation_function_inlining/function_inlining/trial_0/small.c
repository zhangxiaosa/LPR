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
    v_0_3 = fn3(4L, d);
    p = (char)v_0_3 + e[0];
    d = (char)v_0_3 + e[0];
  }
  printf("checksum = %X\n", p);
  return 0;
}