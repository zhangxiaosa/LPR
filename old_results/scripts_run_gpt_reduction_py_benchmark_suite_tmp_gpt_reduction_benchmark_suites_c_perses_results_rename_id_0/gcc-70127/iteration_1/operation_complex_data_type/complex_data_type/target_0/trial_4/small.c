#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int u;
int v_ab[1];
int v_q[1];
int w_ab;
int w_q;

int main() {
  int a_ab;
  int a_q;
  int j;

  w_ab = 0x1C87E74FL;
  w_q = 816;

  a_ab = 8L;
  a_q = 666;

  for (; u <= 1; u += 1) {
    v_ab[0] = w_ab;
    v_q[0] = w_q;
    a_ab = v_ab[0];
    a_q = v_q[0];
  }

  j = v_q[0];

  printf("checksum = %X\n", j);

  return 0;
}