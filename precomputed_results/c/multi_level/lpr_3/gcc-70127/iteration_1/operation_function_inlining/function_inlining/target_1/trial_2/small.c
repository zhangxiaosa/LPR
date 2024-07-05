#include <stdio.h>

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
  struct p a = {8, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w_init;
      v[p2] = a;
    }
}

int main() {
  int b = 0;
  struct p a = {8, 666};
  unsigned j;

  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w_init;
      v[p2] = a;
    }
  }

  a = v[t.ab] = w_init;
  v[t.ab] = a;

  j = v[0].q;

  printf("checksum = %X\n", j);

  return 0;
}