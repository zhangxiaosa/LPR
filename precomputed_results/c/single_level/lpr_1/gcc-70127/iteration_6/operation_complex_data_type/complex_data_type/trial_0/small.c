#include <stdio.h>

unsigned j;

int main() {
  int ab;
  signed q;
  unsigned u;
  int v_ab[1];
  signed v_q[1];
  int w_ab = 0x1C87E74FL;
  signed w_q = 816;
  int i;
  int a_ab = 8;
  signed a_q = 666;
  int p2;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 2) {
      ab = v_ab[p2] = w_ab;
      q = v_q[p2] = w_q;
    }
  }

  for (i = 0; i < 1; i++) {
    ab = v_ab[i];
    q = v_q[i];
    j = q;
  }

  printf("checksum = %X\n", j);
  return 0;
}