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
  struct p a = {0x1C87E74FL, 816};

  for (; u <= 1; u += 1) {
    v[0] = w_init;
  }

  unsigned j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}