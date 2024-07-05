#include <stdio.h>

unsigned j;
unsigned u;
struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {0x1C87E74F, 666};

  for (int i = 0; i >= 0; i -= 1) {
    for (; u <= 1; u += 1) {
      a = v[0] = w;
      v[0] = a;
    }
  }

  for (int i = 0; i < 1; i++) {
    j = v[0].q;
  }

  printf("checksum = %X\n", j);
  return 0;
}
