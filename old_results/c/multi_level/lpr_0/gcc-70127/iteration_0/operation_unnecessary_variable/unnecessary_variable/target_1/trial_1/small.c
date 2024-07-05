#include <stdio.h>

unsigned j;
struct p {
  int ab;
  signed q : 22;
};
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

signed fn6() {
  struct p a = {8L, 666};
  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
}

int main() {
  fn6();
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}