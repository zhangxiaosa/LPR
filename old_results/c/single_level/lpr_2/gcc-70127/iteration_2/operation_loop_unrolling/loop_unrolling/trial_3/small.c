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

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  struct p a = {8L, 666};

  // Unrolled loop: p2 = 0
  {
    // Unrolled loop: u <= 1
    {
      struct p temp = w;
      v[0] = temp;
      a = temp;
    }
    j = v[0].q;
  }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9);
  printf("checksum = %X\n", j);
  return 0;
}