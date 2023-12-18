#include <stdio.h>

unsigned int u;

typedef struct {
  int ab;
  signed int q;
} p;

p v[1];

p w;
w.ab = 0x12345678;
w.q = 999;

int main() {
  p a;
  a.ab = 8L;
  a.q = 666;

  for (; u <= 1; u += 1) {
    a = v[0];
    v[0] = w;
  }

  unsigned int checksum = v[0].q;
  
  printf("checksum = %X\n", checksum);

  return 0;
}