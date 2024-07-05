#include <stdio.h>

unsigned j;

int ab;
int q;

unsigned u;

int main() {
  int p2;
  struct p {
    int ab;
    int q : 22;
  };

  struct p v[1];

  struct p w = {0x1C87E74FL, 816};

  struct p a = {8L, 666};

  for (p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
    j = v[p2].q;
  }

  printf("checksum = %X\n", j);

  return 0;
}
