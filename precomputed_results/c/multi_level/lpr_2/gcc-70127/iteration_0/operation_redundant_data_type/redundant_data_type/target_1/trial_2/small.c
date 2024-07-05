#include <stdio.h>

struct r {
  unsigned ab;
  unsigned s;
};

unsigned j;
struct r t;
unsigned u;
int ab_v[1];
signed q_v[1];
int w_ab = 0x1C87E74Fu;
signed w_q = 816u;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a_ab = 8L;
  signed a_q = 666;

  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a_ab = ab_v[p2] = w_ab;
      q_v[p2] = a_q;
    }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9u);
  j = q_v[0];
  printf("checksum = %X\n", j);
  return 0;
}