#include <stdio.h>

unsigned int j;
unsigned int u;
int ab;
int q;
struct p {
  int ab;
  int q;
};
struct p v[1];
int i;
int ab_a;
int q_a;
int ab_w;
int q_w;
unsigned int j_final;

int main() {
  struct p w = {0x1C87E74FL, 816};
  struct p a = {8L, 666};
  for (i = 0; i >= 0; i -= 1) {
    for (; u <= 1; u += 1) {
      ab_a = a.ab;
      q_a = a.q;
      ab = ab_w = w.ab;
      q = q_w = w.q;
      v[i].ab = ab_a;
      v[i].q = q_a;
    }
  }

  for (i = 0; i < 1; i++) {
    j_final = v[i].q;
  }

  printf("checksum = %X\n", j_final);
  return 0;
}