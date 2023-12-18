#include <stdio.h>

unsigned j;
struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

void fn6() {
  struct p a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
  }
}

void fn1(unsigned p1, int) {
  printf("checksum = %X\n", p1);
}

int main() {
  fn6();
  j = v[0].q;
  fn1(j, 0);
  return 0;
}