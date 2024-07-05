#include <stdio.h>

unsigned j;

void fn2(p1) {
  j = p1;
}

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
int v_ab[1];
signed int v_q[1];
int w_ab = 0x1C87E74FL;
signed int w_q = 816;

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4) {
  struct p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = (struct p){w_ab, w_q};
      v_ab[p2] = w_ab;
      v_q[p2] = w_q;
    }
  }
}

int main() {
  int i;

  fn5(t.ab, 3, 2, t.s);

  for (i = 0; i < 1; i++) {
    fn2(v_q[i]);
  }

  printf("checksum = %X\n", j);
  return 0;
}