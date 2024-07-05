#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

struct r {
  int ab;
  int s;
};

unsigned j;
int t_ab;
int t_s;
unsigned u;
struct p v[1];

int w_ab = 0x1C87E74F;
int w_q = 816;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = {w_ab, w_q};
      v[p2] = a;
    }
  }
}

int main() {
  fn5(t_ab, 3, 2, t_s, 9u);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}