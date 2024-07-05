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

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}