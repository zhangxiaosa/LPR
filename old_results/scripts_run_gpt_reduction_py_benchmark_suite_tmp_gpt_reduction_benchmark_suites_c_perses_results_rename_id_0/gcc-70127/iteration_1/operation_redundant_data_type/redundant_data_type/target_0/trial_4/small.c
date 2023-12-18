#include <stdio.h>

int ab;
signed int q : 22;
unsigned u;
int v_ab[1];
signed int v_q[1];
int w_ab = 0x1C87E74F;
signed int w_q = 816;

int main() {
  int a_ab = 8L;
  signed int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w_ab;
    a_q = v_q[0] = w_q;
  }

  unsigned j = v_q[0];
  printf("checksum = %X\n", j);
  return 0;
}