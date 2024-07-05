#include <stdio.h>

struct p {
  int ab;
  int q;
};

struct r {
  int ab;
  int s;
};

unsigned int j;

struct r t;
int t_ab;
int t_s;

unsigned int u;

struct p v[1];
int v_0_ab;
int v_0_q;

struct p w = {0x1C87E74Fu, 816u};
int w_ab;
int w_q;

unsigned int fn5(unsigned int p1, signed int p2, unsigned int p3, unsigned int p4, unsigned int p5) {
  struct p a = {8L, 666};

  while (u <= 1) {
    a = w;
    v[p2] = w;
    u += 1;
  }
}

int main(void) {
  fn5(t_ab, 3, 2, t_s, 9u);
  unsigned int j = v_0_q;
  printf("checksum = %u\n", j);
  return 0;
}