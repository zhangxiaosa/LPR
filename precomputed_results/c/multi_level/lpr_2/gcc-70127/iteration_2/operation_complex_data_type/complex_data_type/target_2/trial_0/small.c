#include <stdio.h>

unsigned int u;
int ab_w;
int q_w;
int ab_a;
int q_a;
struct p v[1];
int ab_v0;
int q_v0;

int main() {
  int ab_w_init = 0x1C87E74F;
  int q_w_init = 816;
  struct p w = {ab_w_init, q_w_init};

  int ab_a_init = 8;
  int q_a_init = 666;
  struct p a = {ab_a_init, q_a_init};

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  int checksum = v[0].q;
  printf("checksum = %X\n", checksum);
  return 0;
}