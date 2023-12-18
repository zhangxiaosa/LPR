#include <stdio.h>

unsigned u;

int main() {
  struct {
    int ab;
    signed q : 22;
  } v[1];

  struct {
    int ab;
    signed q : 22;
  } a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = {0x12345678, 999};
    v[0] = a;
  }

  printf("checksum = %X\n", v[0].q);

  return 0;
}