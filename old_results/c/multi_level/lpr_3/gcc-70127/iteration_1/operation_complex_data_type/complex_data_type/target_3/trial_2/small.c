#include <stdio.h>

unsigned int u;

int ab;
int q;

#define V_SIZE 1
struct p {
  int ab;
  int q : 22;
};

struct p v[V_SIZE];
struct p w_init = {0x1C87E74F, 816};

int main() {
  struct p a = {8, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned int j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}