#include <stdio.h>

struct p {
  int ab;
  signed q;
};

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
int w_ab = 0x1C87E74FL;
signed w_q = 816;

unsigned u;
struct p v[1];
struct p w = {w_ab, w_q};

signed fn6() {
  struct p a = {8L, 666};
  int p2;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  int b = 0;
  fn6();
  j = v[0].q;
  fn1(j, b);
  return 0;
}