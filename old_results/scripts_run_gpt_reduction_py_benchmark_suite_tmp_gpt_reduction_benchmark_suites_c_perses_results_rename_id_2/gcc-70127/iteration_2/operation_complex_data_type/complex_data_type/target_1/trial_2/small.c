#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned int u;
struct p v;
struct p w = {0x1C87E74Fu, 816u};

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v = w;
  }

  printf("checksum = %X\n", v.q);
  return 0;
}