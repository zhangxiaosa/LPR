#include <stdio.h>

unsigned u;

struct p {
  int ab;
  int q : 12;
};

struct p v[1];
struct p w = {0x4F, 0x330};

int main() {
  struct p a = w;
  
  printf("checksum = %X\n", w.q);
  return 0;
}