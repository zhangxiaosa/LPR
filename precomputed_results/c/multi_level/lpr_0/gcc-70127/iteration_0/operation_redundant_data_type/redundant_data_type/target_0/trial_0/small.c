#include<stdio.h>

int v[1];

struct p {
  int ab;
  int q : 22;
};

unsigned u;

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

struct p w = {0x1C87E74FL, 816};

struct p fn6() {
  struct p a = {8L, 666};
  for (int p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
  return a;
}

int main() {
  fn6();
  fn1(v[0].q, 0);
  return 0;
}