#include <stdio.h>

struct r {
  unsigned ab;
  unsigned s;
};

unsigned j;
struct r t;
unsigned u;
int v[1];
int w = 0x1C87E74F;

int fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a = 8;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9u);
  j = v[0];
  printf("checksum = %X\n", j);
  return 0;
}
