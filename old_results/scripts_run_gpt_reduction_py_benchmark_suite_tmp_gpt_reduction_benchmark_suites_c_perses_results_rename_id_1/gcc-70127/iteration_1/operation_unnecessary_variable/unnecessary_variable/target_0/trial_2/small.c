#include <stdio.h>

unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  for (; u <= 1; u += 1) {
    v[0] = w;
  }
  unsigned j = w.q;
  printf("checksum = %X\n", j);
  return 0;
}
