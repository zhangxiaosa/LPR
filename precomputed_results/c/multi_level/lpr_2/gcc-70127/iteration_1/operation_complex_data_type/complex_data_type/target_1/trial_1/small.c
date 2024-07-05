#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
unsigned u;
int v_ab;
int v_q : 22;

struct p w = {0x1C87E74Fu, 816u};

void print_checksum(int checksum) { printf("checksum = %X\n", checksum); }

int main() {
  struct p a = {8L, 666};

  int a_ab;
  int a_q : 22;

  int w_ab;
  int w_q : 22;

  for (; u <= 1; u += 1) {
    a_ab = w_ab;
    a_q = w_q;
    v_ab = a_ab;
    v_q = a_q;
  }

  j = v_q;
  print_checksum(j);

  return 0;
}