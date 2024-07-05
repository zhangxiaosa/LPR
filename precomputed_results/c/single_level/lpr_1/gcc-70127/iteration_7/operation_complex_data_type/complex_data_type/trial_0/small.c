#include <stdio.h>

unsigned j;
int ab;
signed int q;
unsigned u;
int main() {
  int i;
  int ab_a = 8L;
  signed int q_a = 666;
  int ab_w = 0x1C87E74FL;
  signed int q_w = 816;
  struct p {
    int ab;
    signed int q : 22;
  };
  struct p v[1];
  struct p w = {ab_w, q_w};

  for (; u <= 1; u += 2) {
    struct p a;
    a.ab = ab_a;
    a.q = q_a;

    v[0] = w;
    a = v[0];
  }

  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }

  printf("checksum = %X\n", j);
  return 0;
}