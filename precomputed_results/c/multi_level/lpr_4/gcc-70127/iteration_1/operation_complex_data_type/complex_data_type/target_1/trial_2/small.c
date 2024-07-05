#include <stdio.h>

unsigned int u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {0x1C87E74F, 666};

  for (; u <= 1; u += 1) {
    v[0] = w;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}
