#include <stdio.h>

unsigned int u;

int ab;
int q;

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  int a_ab;
  int a_q;
  struct p a;
  
  a_ab = 0x1C87E74F;
  a_q = 666;
  a.ab = a_ab;
  a.q = a_q;

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}