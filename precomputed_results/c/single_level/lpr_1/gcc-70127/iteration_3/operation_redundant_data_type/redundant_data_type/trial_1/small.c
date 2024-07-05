#include <stdio.h>

unsigned j;

void fn2(p1) { j = p1; }

struct p {
  int ab;
  signed q : 22;
};

unsigned ab;
unsigned s;
struct p t;

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
  fn5(t.ab, 3, 2, t.s);
  for (i = 0; i < 1; i++)
    fn2(v[i].q);
  printf("checksum = %X\n", j);
  return 0;
}