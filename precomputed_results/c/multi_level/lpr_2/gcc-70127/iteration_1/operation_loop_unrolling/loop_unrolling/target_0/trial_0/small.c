#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

void print_checksum(int checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  struct p a = {8L, 666};
  struct p v[1];
  struct p w = {0x1C87E74Fu, 816u};
  
  // Unrolled loop body
  a = v[0] = w;
  v[0] = a;
  
  unsigned j = v[0].q;
  print_checksum(j);
  
  return 0;
}