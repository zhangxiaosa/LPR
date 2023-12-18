#include <stdio.h>

unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

int main() {
  p a = {8L, 666};
  a = v[0] = w;
  v[0] = a;
  a = v[0] = w;
  v[0] = a;
  unsigned checksum = v[0].q;
  printf("checksum = %X\n", checksum);
  return 0;
}