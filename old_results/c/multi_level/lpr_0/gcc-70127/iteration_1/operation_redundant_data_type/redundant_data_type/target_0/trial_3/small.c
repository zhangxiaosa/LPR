#include <stdio.h>

int main() {
  int u;
  int v_ab[1];
  signed v_q[1];
  int w_ab = 0x1C87E74FL;
  signed w_q = 816;
  int a_ab = 8L;
  signed a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
    v_ab[0] = a_ab;
    v_q[0] = a_q;
  }

  unsigned j = v_q[0];
  printf("checksum = %X\n", j);

  return 0;
}