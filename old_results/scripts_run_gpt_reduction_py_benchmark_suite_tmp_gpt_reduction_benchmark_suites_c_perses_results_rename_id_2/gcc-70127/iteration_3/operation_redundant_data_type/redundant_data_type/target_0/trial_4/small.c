#include <stdio.h>

typedef int ab_type;
typedef int q_type;

struct p {
  ab_type ab;
  q_type q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}