#include <stdio.h>

struct p {
  int ab;
  signed int q : 22;
};

struct r {
  unsigned int ab;
  unsigned int s;
};

unsigned int j;
struct r t;
unsigned int u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3,
                 unsigned int p4, unsigned int p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9u);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}