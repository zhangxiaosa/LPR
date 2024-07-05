#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  for (; u <= 1; u += 1) {
    v[0] = w;
    v[0] = {8L, 666};
  }

  int j = 666;

  printf("checksum = %X\n", j);
  return 0;
}