#include <stdio.h>

struct p {
  int ab;
  int q;
};

int main() {
  int ab;
  int q;
  unsigned j;
  unsigned u;
  int v_ab;
  int v_q;
  struct p v[1];
  int w_ab;
  int w_q;
  struct p w = {0x1C87E74F, 816};
  void print_checksum(int checksum) { printf("checksum = %X\n", checksum); }
  int a_ab;
  int a_q;

  struct p a = {8, 666};

  for (; u <= 1; u += 1) {
    a_ab = v_ab = w_ab;
    a_q = v_q = w_q;
    v_ab = a_ab;
    v_q = a_q;
  }

  j = v_q;
  print_checksum(j);

  return 0;
}