#include <stdio.h>

unsigned j;
unsigned ab;
unsigned s;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

unsigned fn5(signed p2) {
  p a = {8L, 666};
  a = v[0] = w;
  v[0] = a;
}

int main() {
  fn5(2);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}