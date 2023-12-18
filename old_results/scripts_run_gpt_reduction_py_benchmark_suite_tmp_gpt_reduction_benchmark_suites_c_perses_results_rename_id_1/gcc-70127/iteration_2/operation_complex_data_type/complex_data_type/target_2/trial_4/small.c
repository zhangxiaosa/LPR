#include <stdio.h>

unsigned u;

typedef struct {
  int ab;
  signed q : 22;
} p;

int main() {
  p v_0;
  int v_0_ab;
  signed v_0_q;

  int w_ab = 0x12345678;
  signed w_q = 999;

  p a = {8L, 666};

  for (; u <= 1; u += 1) {
    v_0_ab = w_ab;
    v_0_q = w_q;

    a = v_0;
    v_0 = a;
  }

  unsigned checksum = v_0_q;

  printf("checksum = %X\n", checksum);

  return 0;
}