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

int main() {
  struct p a = {8, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = {0x1C87E74F, 816}; // Optimized assignment
    v[0] = a; // Redundant assignment
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}
