#include <stdio.h>

void fn1(unsigned p1, int p2) {
  printf("checksum = %X\n", p1);
}

unsigned j;
struct p {
  int ab;
  signed q : 22;
};
struct r {
  unsigned ab;
  unsigned s;
};
struct r t;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4) {
  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  int i;
  unsigned p1 = t.ab;
  signed p2 = 3;
  unsigned p3 = 2;
  unsigned p4 = t.s;

  struct p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }

  for (i = 0; i < 1; i++)
    j = v[i].q;

  fn1(j, 0);

  return 0;
}