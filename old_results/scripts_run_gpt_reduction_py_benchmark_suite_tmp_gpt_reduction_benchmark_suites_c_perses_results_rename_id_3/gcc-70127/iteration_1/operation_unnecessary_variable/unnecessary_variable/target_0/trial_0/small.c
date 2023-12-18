#include <stdio.h>

unsigned u;

signed q;

#define V_SIZE 1
struct p {
  signed q : 22;
};

struct p v[V_SIZE];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  for (; u <= 1; u += 1) {
    v[0] = {0x1C87E74FL, 816};
  }

  unsigned j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}
