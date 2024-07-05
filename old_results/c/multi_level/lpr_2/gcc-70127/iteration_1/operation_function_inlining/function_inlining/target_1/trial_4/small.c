#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
int t_s;
unsigned u = 0;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
  struct p a = {8L, 666};
  a = v[0] = w;
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}