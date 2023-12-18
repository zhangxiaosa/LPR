#include <stdio.h>

unsigned j;
unsigned u;
typedef struct {
  int ab;
  signed q: 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  p a;
  for (; u <= 1; u += 1) {
    a = v[0] = w;
  }
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
