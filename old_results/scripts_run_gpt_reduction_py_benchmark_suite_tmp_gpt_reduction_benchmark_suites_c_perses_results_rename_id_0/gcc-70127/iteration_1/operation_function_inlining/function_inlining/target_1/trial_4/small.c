#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

unsigned u = 0;
struct p v[1];

int main() {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = {8L, 666};
    v[0] = a;
  }
  unsigned j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}