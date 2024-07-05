#include <stdio.h>

unsigned p;
unsigned t;
unsigned u;
unsigned v_00;

int main() {
  unsigned e[9];
  int i, d;

  t = 0;
  u = 0;

  d = 2L;
  for (; u < 51; ++u) {
    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;

    v_00 = 4L;
    d = (v_00 & 0xFFFF) + 3 + e[0];
  }

  fn9(6, 255UL, 1, d);

  printf("checksum = %X\n", p);

  return 0;
}