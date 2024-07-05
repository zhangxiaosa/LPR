#include <stdio.h>

unsigned j;
struct p {
  int ab;
  int q : 22;
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
  for (int p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
    j = v[p2].q;
  }

  printf("checksum = %X\n", j);
  return 0;
}