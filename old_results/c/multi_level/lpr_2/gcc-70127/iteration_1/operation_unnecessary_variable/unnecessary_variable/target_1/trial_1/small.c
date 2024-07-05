#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

struct p v[1];
struct p w = {0x1C87E74Fu, 816};

void print_checksum(int checksum) {
  printf("checksum = %X\n", checksum);
}

int main() {
  struct p a = {8L, 666};
  
  a = v[0] = w;
  
  j = 816;
  print_checksum(j);
  
  return 0;
}
