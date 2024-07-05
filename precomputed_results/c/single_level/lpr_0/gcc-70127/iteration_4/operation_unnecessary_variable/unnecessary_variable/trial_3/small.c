#include<stdio.h>

struct p {
  int ab;
  signed q : 22;
};

unsigned u;
struct p v[1];
struct p w = {0x1C87E74F, 816};

int main() {
  unsigned j;
  for (; u <= 1; u += 1) {
    v[0].q = w.q;
  }
  j = v[0].q;
  printf("checksum = %X\n", j);
  return 0;
}