#include <stdio.h>

unsigned p;
unsigned t;
unsigned u;
unsigned v_0_3;

int main() {
  unsigned p1 = 0xFBL;
  unsigned p2 = 0xFBL;
  int p3 = t;
  unsigned p4 = 18446744073709551613UL;
  int p5 = t;

  int d = 2L;
  for (; u < 51; ++u) {
    unsigned e[9];
    int i;
    for (i = 0; i < 9; i++) {
      e[i] = 0x9EE7F9D1C772505BLL;
    }

    // Inlined fn2
    char fn2_result = v_0_3 = 4L;

    // Inlined fn3
    short fn3_result = d;

    // Inlined fn4
    unsigned fn4_result = fn2_result + 3;

    d = fn4_result;
  }

  // Inlined fn9
  int fn9_result = fn10(6, 255UL, 1, p1);

  // Inlined fn5
  p = v_0_3;

  printf("checksum = %X\n", p);
  return 0;
}