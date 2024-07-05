#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

struct r {
  unsigned ab;
  unsigned s;
};

struct r t;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
unsigned j;

unsigned fn5(unsigned p1, int p2, unsigned p3, unsigned p4, unsigned p5) {
  for (p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      v[p2] = w; // Optimized assignment
    }
    j = v[p2].q;
  }
}

int main() {
  fn5(t.ab, 3, 2, t.s, 9);
  printf("checksum = %X\n", j);
  return 0;
}