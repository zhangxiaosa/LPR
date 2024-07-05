#include <stdio.h>

unsigned j;

void fn2(int p1) {
  j = (unsigned)p1;
}

struct p {
  int ab;
  signed int q : 22;
};

struct r {
  unsigned int ab;
  unsigned int s;
};

struct r t;
unsigned int u;
struct p v[1];
struct p w = {0x1C87E74F, 816};

unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3, unsigned int p4) {
  struct p a = {8, 666};

  p2 = 0;
  while (p2 >= 0) {
    a = v[p2] = w;
    v[p2] = a;

    // Unroll the loop iterations
    a = v[p2+1] = w;
    v[p2+1] = a;

    p2 -= 2;
  }
}

int main() {
  int i;
  fn5(t.ab, 3, 2, t.s);

  for (i = 0; i < 1; i++)
    fn2(v[i].q);

  printf("checksum = %X\n", j);

  return 0;
}