#include <stdio.h>

unsigned u = 0;

signed ab;
signed q;

#define V_SIZE 1
struct p {
  signed ab;
  signed q : 22;
};

struct p v[V_SIZE];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a = {8, 666};

  a = v[0] = w_init;
  v[0] = a;
  a = v[0] = w_init;
  v[0] = a;

  printf("checksum = %X\n", v[0].q);

  return 0;
}