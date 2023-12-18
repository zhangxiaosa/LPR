#include <stdio.h>

unsigned j;
unsigned u;
typedef struct {
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  for (; u <= 1; u += 1) {
    v[0] = w;
    v[0] = v[0];
  }

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}