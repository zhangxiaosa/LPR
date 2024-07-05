#include <stdio.h>

unsigned int u;
int ab;
int q;

struct p {
  int ab;
  int q;
};

struct p v[1];
struct p w;

int main() {
  int ab_a;
  int q_a;
  struct p a;

  ab_a = 0x1C87E74F;
  q_a = 666;
  a.ab = ab_a;
  a.q = q_a;

  for (u = 0; u <= 1; u += 1) {
    v[0].ab = w.ab = ab_a;
    v[0].q = w.q = q_a;
  }
  
  printf("checksum = %X\n", v[0].q);
  
  return 0;
}
