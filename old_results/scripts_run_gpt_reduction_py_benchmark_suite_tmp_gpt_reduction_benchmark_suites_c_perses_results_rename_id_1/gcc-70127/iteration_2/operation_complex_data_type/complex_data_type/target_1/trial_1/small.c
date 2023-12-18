#include <stdio.h>

unsigned u;
int ab_v;
signed q_v;

typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
int ab_w = 0x12345678;
signed q_w = 999;
p w = {ab_w, q_w};
int ab_a = 8L;
signed q_a = 666;
p a = {ab_a, q_a};

int main() {
  for (; u <= 1; u += 1) {
     ab_a = ab_v = ab_w;
     q_a = q_v = q_w;
     v[0].ab = ab_a;
     v[0].q = q_a;
  }

  unsigned checksum = v[0].q;

  printf("checksum = %X\n", checksum);

  return 0;
}