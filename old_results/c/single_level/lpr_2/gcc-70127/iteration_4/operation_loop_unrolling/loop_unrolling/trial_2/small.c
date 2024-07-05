#include <stdio.h>

unsigned j;
unsigned u;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  struct p a = {8L, 666};
  int p2;

  for (p2 = 0; p2 < 1; p2 += 1) {
    a = v[p2] = w;
    v[p2] = a;
    a = v[p2] = w;
    v[p2] = a;
    j = v[p2].q;
  }

  printf("checksum = %X\n", j);
  return 0;
}