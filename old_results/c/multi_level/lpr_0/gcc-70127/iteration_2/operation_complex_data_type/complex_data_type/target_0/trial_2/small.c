#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  int a_ab = 8L;
  signed int a_q = 666;

  for (; u <= 1; u += 1) {
    v[0].ab = w.ab;
    v[0].q = w.q;
    a_ab = v[0].ab;
    a_q = v[0].q;
  }

  int j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}