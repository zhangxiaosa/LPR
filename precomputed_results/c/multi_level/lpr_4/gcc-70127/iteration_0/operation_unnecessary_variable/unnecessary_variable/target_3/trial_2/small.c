#include <stdio.h>

unsigned j;
struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {0x1C87E74F, 666};

  a.q = w.q; // Copy propagation
  v[0].q = w.q; // Constant propagation

  j = v[0].q;

  printf("checksum = %X\n", j);
  return 0;
}