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
signed w_init_ab = 0x1C87E74FL;
signed w_init_q = 816;

int main() {
  struct p a = {8, 666};

  for (; u <= 1; u += 2) {
    a = v[0] = w_init_ab;
    v[0].q = w_init_q;

    a = v[0] = w_init_ab;
    v[0].q = w_init_q;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}
