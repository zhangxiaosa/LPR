#include <stdio.h>

void fn1(unsigned int p1, int p2) { printf("checksum = %X\n", p1); }

unsigned int j;

struct p {
  signed ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;

unsigned int u;

struct p v[1];

struct p w = {0x1C87E74FL, 816};

typedef unsigned int d;

typedef unsigned int e;

typedef unsigned int f;

unsigned int fn5(unsigned int p1, signed p2, unsigned int p3, unsigned int p4, unsigned int p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  j = v[0].q;
  fn1(j, b);
  return 0;
}