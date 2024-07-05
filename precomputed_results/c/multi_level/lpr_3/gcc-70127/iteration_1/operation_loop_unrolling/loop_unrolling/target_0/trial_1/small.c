#include <stdio.h>

struct p {
  signed ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a = {8, 666};
  signed p2;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    a = v[p2] = w_init;
    v[p2] = a;
  }

  u = 2;  // Update loop variable u to its final value after unrolling the loop

  unsigned j = v[0].q;
  printf("checksum = %X\n", j);

  return 0;
}