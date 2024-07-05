#include <stdio.h>

int main() {
  int ab = 8;
  int q = 666;
  unsigned j;
  unsigned u;
  int w_ab = 0x1C87E74F;
  int w_q = 816;

  void print_checksum(int checksum) { printf("checksum = %X\n", checksum); }

  struct p {
    int ab;
    int q : 22;
  };

  struct p v[1];
  struct p a = {ab, q};

  for (; u <= 1; u += 1) {
    a = v[0] = {w_ab, w_q};
    v[0] = a;
  }

  j = v[0].q;
  print_checksum(j);

  return 0;
}