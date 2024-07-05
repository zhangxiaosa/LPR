#include <stdio.h>

typedef signed int a;
typedef unsigned int d;

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned int j;

struct p {
  int ab;
  signed q : 22;
};

struct r {
  unsigned int ab;
  unsigned int s;
};

struct r t = {0, 0};

unsigned int u;

struct p v[1] = {{{0, 0}}};
struct p w = {0x1C87E74FL, 816};

unsigned int fn5(unsigned int p1, signed p2, unsigned int p3, unsigned p4, unsigned p5) {
  struct p a = {8, 666};
  for (p2 = 0; p2 >= 0; p2--) {
    for (; u <= 1u; u++) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  j = v[0].q;
  fn1(j, b);
  return 0;
}
