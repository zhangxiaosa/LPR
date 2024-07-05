#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  struct p a = {0x1C87E74F, 666};

  v[0] = w;
  printf("checksum = %X\n", 816);
  return 0;
}