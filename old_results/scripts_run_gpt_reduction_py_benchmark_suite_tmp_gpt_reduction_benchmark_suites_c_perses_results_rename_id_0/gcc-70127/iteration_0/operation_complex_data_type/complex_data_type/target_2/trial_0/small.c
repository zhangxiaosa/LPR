#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w;
unsigned w_ab;

signed fn6() {
  struct p a = {8L, 666};
  int p2;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a.ab = w_ab;
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