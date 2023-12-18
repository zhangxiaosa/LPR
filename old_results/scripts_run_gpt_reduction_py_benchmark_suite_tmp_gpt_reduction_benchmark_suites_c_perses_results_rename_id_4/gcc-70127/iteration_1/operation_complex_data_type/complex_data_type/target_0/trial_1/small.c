#include <stdio.h>

int v_ab[1];
int v_q[1];

int w_ab = 0x1C87E74F;
int w_q = 816;

int main() {
  int a_ab = 0x1C87E74F;
  int a_q = 666;

  unsigned u;
  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
  }

  printf("checksum = %X\n", v_q[0]);
  return 0;
}