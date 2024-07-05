#include <stdio.h>

unsigned j;
unsigned u;
int ab;
signed int q;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
int main() {
  p a = {8L, 666};
  int w_ab = 0x12345678;
  signed w_q = 999;

  for (; u <= 1; u += 1) {
    a = v[0] = {w_ab, w_q};
    v[0] = a;
  }

  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}