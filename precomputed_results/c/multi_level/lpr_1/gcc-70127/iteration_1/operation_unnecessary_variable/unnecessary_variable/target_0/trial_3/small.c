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
  p a = {0x12345678, 999};
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}
