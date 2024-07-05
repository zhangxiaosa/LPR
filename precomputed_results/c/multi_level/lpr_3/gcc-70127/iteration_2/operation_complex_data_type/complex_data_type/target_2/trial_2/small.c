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
    a = v[0] = (struct p){w_init_ab, w_init_q};
    v[0] = a;

    a = v[0] = (struct p){w_init_ab, w_init_q};
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}