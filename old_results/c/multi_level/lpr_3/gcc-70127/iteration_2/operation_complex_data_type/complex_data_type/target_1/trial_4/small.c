#include <stdio.h>

unsigned int u;

signed int ab;
signed int q;

#define V_SIZE 1
struct p {
  signed int ab;
  signed int q : 22;
};

struct p v[1];
struct p w_init = {0x1C87E74FL, 816};

int main() {
  struct p a = {8, 666};

  for (; u <= 1; u += 2) {
    a = v[0] = w_init;
    v[0] = a;

    a = v[0] = w_init;
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}
