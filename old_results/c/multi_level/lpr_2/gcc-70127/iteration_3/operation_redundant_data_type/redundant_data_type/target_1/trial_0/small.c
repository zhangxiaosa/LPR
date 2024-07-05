#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned u;
int v[1];
int w = {0x1C87E74Fu, 816u};

int main() {
  int a = {8L, 666};
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  printf("checksum = %X\n", v[0]);
  return 0;
}