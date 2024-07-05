#include <stdio.h>

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  int i;
  struct p a = {8L, 666};

  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    struct p a = w;
    v[p2] = a;
    v[p2] = a;
  }

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}