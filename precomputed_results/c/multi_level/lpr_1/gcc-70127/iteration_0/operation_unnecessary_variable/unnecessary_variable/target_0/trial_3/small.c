#include <stdio.h>

unsigned j;
unsigned ab;
unsigned s;
unsigned u;
typedef struct {
  int ab;
  signed q : 22;
} p;
p v[1];
p w = {0x12345678, 999};

unsigned fn5(unsigned p1, signed p2, unsigned p3, unsigned p4, unsigned p5) {
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 1) {
      v[p2] = w;
    }
}

int main() {
  fn5(ab, 2, 2, s, 9);
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}