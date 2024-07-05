#include <stdio.h>

signed int ab;
signed int q : 22;
unsigned int u;

signed int v[1];

signed int w_init = {0x1C87E74FL, 816};

int main() {
  signed int a = {8, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = w_init;
    v[0] = a;
  }

  unsigned int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}