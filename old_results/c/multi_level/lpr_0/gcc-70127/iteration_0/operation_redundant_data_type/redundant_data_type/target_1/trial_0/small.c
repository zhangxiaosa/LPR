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

struct p v[1] = {0};

struct p w = {.ab = 0x1C87E74F, .q = 816};

void fn6() {
  struct p a = {.ab = 8, .q = 666};
  int p2;
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u.q <= 1; u.q += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  int b = 0;
  fn6();
  j = v[0].q;
  fn1(j, b);
  return 0;
}