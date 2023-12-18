#include <stdio.h>

int v_ab[1];
signed int v_q[1];

int u;

int w_ab = 0x1C87E74FL;
signed int w_q = 816;

int main() {
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    v_ab[0] = w_ab;
    v_q[0] = w_q;
  }

  int j = v_q[0];

  printf("checksum = %X\n", j);

  return 0;
}
