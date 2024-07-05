#include <stdio.h>

unsigned j;
unsigned u;

struct {
  int ab;
  signed q : 22;
} v[1];

struct {
  int ab;
  signed q : 22;
} w = {0x12345678, 999};

int main() {
  struct {
    int ab;
    signed q : 22;
  } a = {8L, 666};

  for (; u <= 1; u += 1) {
    a = v[0] = (struct {
      int ab;
      signed q : 22;
    })w;
    v[0] = (struct {
      int ab;
      signed q : 22;
    })a;
  }

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}