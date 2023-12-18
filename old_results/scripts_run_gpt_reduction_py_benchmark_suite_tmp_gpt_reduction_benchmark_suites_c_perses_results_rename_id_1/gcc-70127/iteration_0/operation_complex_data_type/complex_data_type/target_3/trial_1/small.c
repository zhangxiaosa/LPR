#include <stdio.h>

unsigned j;
unsigned ab;
unsigned s;
unsigned u;

struct p {
  int ab;
  signed q : 22;
};
typedef struct p p;

struct r {
  unsigned ab;
  unsigned s;
};
typedef struct r r;

p v[1];
int w_ab = 0x1C87E74FL;
signed w_q = 816;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = {w_ab, w_q};
      v[p2] = a;
    }
  }
}

int main() {
  fn5(ab, 2, 2, s, 9);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}