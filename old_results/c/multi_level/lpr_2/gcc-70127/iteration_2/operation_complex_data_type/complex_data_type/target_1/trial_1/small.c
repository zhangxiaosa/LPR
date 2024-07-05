#include <stdio.h>

unsigned int u;
int v_ab[1];
int v_q[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab[0] = w.ab;
    a_q = v_q[0] = w.q;
  }

  printf("checksum = %X\n", v_q[0]);
  return 0;
}