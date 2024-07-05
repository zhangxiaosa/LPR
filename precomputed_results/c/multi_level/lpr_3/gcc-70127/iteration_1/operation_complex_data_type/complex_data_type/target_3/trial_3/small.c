#include <stdio.h>

unsigned u;

signed ab;
signed q;

#define V_SIZE 1
struct p {
  signed ab;
  signed q : 22;
};

struct p v[V_SIZE];
struct p w_init;

int main() {
  struct p a = {8, 666};

  // Assigning primary data type variables to w_init
  signed w_init_ab = 0x1C87E74FL;
  signed w_init_q = 816;
  w_init.ab = w_init_ab;
  w_init.q = w_init_q;

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}