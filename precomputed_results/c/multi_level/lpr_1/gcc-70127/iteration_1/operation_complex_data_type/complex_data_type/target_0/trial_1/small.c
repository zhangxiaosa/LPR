#include <stdio.h>

unsigned int j;
unsigned int u;

int ab;
signed int q;

typedef struct {
  int ab;
  signed int q;
} p;

p v[1];
unsigned int w_ab;
signed int w_q;

int main() {
  unsigned long int a_ab;
  signed int a_q;

  v[0].ab = w_ab;
  v[0].q = w_q;

  a_ab = 8L;
  a_q = 666;

  for (; u <= 1; u += 1) {
    a_ab = v[0].ab;
    a_q = v[0].q;

    v[0].ab = a_ab;
    v[0].q = a_q;
  }

  j = v[0].q;

  printf("checksum = %X\n", j);  

  return 0;
}