#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
unsigned u;
int v_ab;
int v_q;
struct p w = {0x1C87E74Fu, 816u};

void print_checksum(int checksum) { printf("checksum = %X\n", checksum); }

int main() {
  struct p a = {8L, 666};

  for (; u <= 1; u += 1) {
    a.ab = w.ab;
    a.q = w.q;
    v_ab = a.ab;
    v_q = a.q;
  }

  j = v_q;
  print_checksum(j);

  return 0;
}