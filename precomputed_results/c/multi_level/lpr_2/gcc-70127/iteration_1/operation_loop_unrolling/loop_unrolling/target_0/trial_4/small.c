#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

unsigned j;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74Fu, 816u};

void print_checksum(checksum) { printf("checksum = %X\n", checksum); }

int main() {
  struct p a = {8L, 666};
  
  // Unrolled loop
  a = v[0] = w;  // Iteration 1
  // No changes for Iteration 2 as 'u' will be incremented to 2 and the loop will terminate
  
  j = v[0].q;
  print_checksum(j);
  return 0;
}