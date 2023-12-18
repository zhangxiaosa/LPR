#include <stdio.h>

unsigned int j;
unsigned int u;
int ab;
signed int q;

int main() {
  int w_ab = 0x12345678;
  int w_q = 999;
  int a_ab = 8L;
  int a_q = 666;

  for (; u <= 1; u += 1) {
    ab = w_ab;
    q = w_q;
    ab = ab;
    q = q;
  }
  j = q;
  printf("checksum = %X\n", j);
  return 0;
}