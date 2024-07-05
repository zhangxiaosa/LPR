#include <stdio.h>

unsigned j;
unsigned u;

typedef struct {
  int ab;
  signed q : 22;
} p;

p v[1];
p w = {0x12345678, 999};

int main() {
  int ab = 8L;
  signed q = 666;

  for (; u <= 1; u += 1) {
    v[0].ab = ab;
    v[0].q = q;
    w.ab = ab;
    w.q = q;
  }

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}