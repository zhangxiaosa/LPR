#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

struct p {
  signed ab;
  signed q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;
unsigned u;
struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  for (; u <= 1; u += 1) {
    v[0].ab = 8;
    v[0].q = 666;
  }
}

int main() {
  int b = 0;
  fn5(t.ab, 3, 2, t.s, 9);
  unsigned j = v[0].q;
  fn1(j, b);
  return 0;
}
