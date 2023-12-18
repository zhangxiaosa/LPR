#include <stdio.h>

unsigned t.ab;
unsigned t.s;

struct {
  int ab;
  signed q : 22;
} p;

struct {
  unsigned ab;
  unsigned s;
} r;

unsigned j;
r t;
unsigned u;
p v[1];
p w = {0x1C87E74FL, 816};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  p a = {8L, 666};
  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  fn5(t.ab, 2, 2, t.s, 9);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}