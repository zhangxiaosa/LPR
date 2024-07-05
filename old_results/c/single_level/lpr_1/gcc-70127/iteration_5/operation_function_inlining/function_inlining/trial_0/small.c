#include <stdio.h>

unsigned j;

struct p {
  int ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;

unsigned u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

int main() {
  struct p a = {8L, 666};

  for (signed p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[3] = w;
      v[3] = a;
    }

  j = v[0].q;
  printf("checksum = %X\n", j);

  return 0;
}