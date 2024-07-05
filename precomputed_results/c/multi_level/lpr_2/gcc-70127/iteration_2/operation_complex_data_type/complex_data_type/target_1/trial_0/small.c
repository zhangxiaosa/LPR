#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned int u;
int v_ab;
int v_q;
int w_ab = 0x1C87E74F;
int w_q = 816;

int main() {
  int a_ab = 8;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab = w_ab;
    a_q = v_q = w_q;
  }

  printf("checksum = %X\n", v_q);
  return 0;
}