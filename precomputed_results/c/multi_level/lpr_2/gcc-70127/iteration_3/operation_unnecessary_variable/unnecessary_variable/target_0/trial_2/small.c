#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

int main() {
  struct p a = {8, 666};
  printf("checksum = %X\n", a.q);
  return 0;
}