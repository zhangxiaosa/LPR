#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
int t_ab;
int t_s;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
  }
}

int main() {
  fn5(t_ab, 3, 2, t_s, 9u);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}