#include <stdio.h>

struct p {
  int ab;
  int q : 12;
};

struct p v[1];
struct p w = {0x4F, 0x330};

int main() {
  struct p a = {0x1C87E74F, 666};

  struct p v_0 = w;
  struct p a_0 = v_0;
  v_0 = a_0;

  printf("checksum = %X\n", v_0.q);

  return 0;
}