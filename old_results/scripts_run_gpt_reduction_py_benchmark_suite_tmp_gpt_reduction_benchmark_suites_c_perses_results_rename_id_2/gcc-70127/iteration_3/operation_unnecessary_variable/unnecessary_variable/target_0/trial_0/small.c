#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

int u;
struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {8, 666};
  for (; u <= 1; u += 1) {
    a = w;
    w = a;
  }
  printf("checksum = %X\n", w.q);
  return 0;
}