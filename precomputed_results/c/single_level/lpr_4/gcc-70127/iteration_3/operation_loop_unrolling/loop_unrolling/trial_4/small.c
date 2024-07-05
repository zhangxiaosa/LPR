#include <stdio.h>

typedef struct {
  int ab;
  signed q : 22;
} p;

unsigned u;
p v[1];
p w = {0x1C87E74FL, 816};
unsigned j;

int main() {
  int i;
  p a = {8L, 666};
  a = v[0] = w;
  v[0] = a;

  j = v[0].q;

  printf("checksum = %X\n", j);
  return 0;
}