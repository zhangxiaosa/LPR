#include <stdio.h>

unsigned u;

int v_ab;
signed int v_q;

int w_ab = 0x12345678;
signed int w_q = 999;

typedef struct {
  int ab;
  signed q : 22;
} p;

p v[1];
p w = {0x12345678, 999};

int main() {
  int a_ab = 8L;
  signed int a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v_ab = w_ab;
    a_q = v_q = w_q;
  }

  unsigned checksum = v_q;

  printf("checksum = %X\n", checksum);

  return 0;
}