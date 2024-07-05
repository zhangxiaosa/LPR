#include <stdio.h>

unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  int a_ab = 8L;
  signed a_q = 666;

  for (; u <= 1; u += 1) {
    v[0].ab = w.ab;
    v[0].q = w.q;
  }

  unsigned checksum = v[0].q;
  printf("checksum = %X\n", checksum);
  return 0;
}