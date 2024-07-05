#include <stdio.h>

typedef struct {
  int ab;
  signed q : 22;
} p;

typedef struct {
  unsigned ab;
  unsigned s;
} r;

unsigned j;
r t;
unsigned u;

int v_ab[1];
signed v_q[1];

int w_ab = 0x1C87E74F;
signed w_q = 816;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  int a_ab = 8L;
  signed a_q = 666;

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a_ab = v_ab[p2] = w_ab;
      a_q = v_q[p2] = w_q;
    }
  }
}

int main() {
  fn5(t.ab, 2, 2, t.s, 9);
  j = v_q[0];
  printf("checksum = %X\n", j);
  return 0;
}