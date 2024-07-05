#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
int t_s;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

int main() {
  for (; 1 <= 1; u += 1) {
    v[0] = w;
  }

  j = w.q;
  printf("checksum = %X\n", j);
  return 0;
}
