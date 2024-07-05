#include <stdio.h>

unsigned p;
unsigned t;
unsigned u;
unsigned v_0_3;

void fn5(unsigned p1) {
  p = p1;
}

void fn6(unsigned p1) {
  fn5(p1);
}

unsigned fn9(unsigned p1, unsigned p2, int p3, unsigned p4, int p5) {
  int d = 2L;

  for (; u < 51; ++u) {
    unsigned e[9];
    int i;

    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;

    d = (fn2(v_0_3 = fn3(4L, d), 3) + p1 + p2);
  }

  return p2;
}

int main() {
  int d = 2L;

  for (; u < 51; ++u) {
    unsigned e[9];
    int i;

    for (i = 0; i < 9; i++)
      e[i] = 0x9EE7F9D1C772505BLL;

    d = (v_0_3 + 3 + e[0]);
  }

  fn6(v_0_3);
  printf("checksum = %X\n", p);
  return 0;
}