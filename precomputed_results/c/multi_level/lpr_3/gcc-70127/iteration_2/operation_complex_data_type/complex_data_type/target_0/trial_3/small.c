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
struct p w_init = {0x1C87E74FL, 816};

int main() {
  signed a_ab = 8;
  signed a_q = 666;

  for (; u <= 1; u += 2) {
    a_ab = v[0].ab = w_init.ab;
    a_q = v[0].q = w_init.q;

    a_ab = v[0].ab = w_init.ab;
    a_q = v[0].q = w_init.q;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}