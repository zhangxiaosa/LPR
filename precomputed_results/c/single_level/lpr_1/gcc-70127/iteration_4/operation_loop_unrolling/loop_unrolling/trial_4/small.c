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

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    a = v[p2] = w;
    v[p2] = a;
    a = v[p2] = w;
    v[p2] = a;
    u += 2;
  }
}

int main() {
  int i;
  fn5(t.ab, 3, 2, t.s);
  for (i = 0; i < 1; i++)
    j = v[i].q;
  printf("checksum = %X\n", j);
  return 0;
}