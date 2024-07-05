#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

unsigned v[1];
unsigned j;

int main() {
  struct p a = {8L, 666};
  
  for (; 1 <= 1; 1 += 1) {
    a = v[0] = {0x1C87E74FL, 816};
    v[0] = a;
  }
  
  for (int i = 0; i < 1; i++) {
    j = v[i].q;
  }
  
  printf("checksum = %X\n", j);
  
  return 0;
}