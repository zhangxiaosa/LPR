#include<stdio.h>

struct p {
  int ab;
  int q: 22;
};

int u;
struct p v[1];

int main() {
  struct p a = {8, 666};
  for (; u <= 1; u += 1) {
    struct p constant_value = {0x1C87E74F, 816};
    a = v[0] = constant_value;
    v[0] = a;
  }
  printf("checksum = %X\n", v[0].q);
  return 0;
}