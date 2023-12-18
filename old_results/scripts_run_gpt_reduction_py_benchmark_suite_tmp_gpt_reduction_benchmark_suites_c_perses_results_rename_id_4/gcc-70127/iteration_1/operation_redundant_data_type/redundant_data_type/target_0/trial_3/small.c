#include <stdio.h>

unsigned u;
int ab;
int q : 22;

int main() {
  int a_ab = 0x1C87E74F;
  int a_q = 666;

  int v_ab[1];
  int v_q[1];

  int w_ab = 0x1C87E74F;
  int w_q = 816;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
    v_ab[0] = a_ab;
    v_q[0] = a_q;
  }

  printf("checksum = %X\n", v_q[0]);
  return 0;
}