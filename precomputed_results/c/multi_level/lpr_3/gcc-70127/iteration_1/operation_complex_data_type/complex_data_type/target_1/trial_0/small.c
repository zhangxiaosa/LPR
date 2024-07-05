#include <stdio.h>

unsigned u;
signed ab;
signed q;
struct p {
  signed ab;
  signed q : 22;
};

struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  signed ab_a = 8;
  signed q_a = 666;
  struct p a = {ab_a, q_a};

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}