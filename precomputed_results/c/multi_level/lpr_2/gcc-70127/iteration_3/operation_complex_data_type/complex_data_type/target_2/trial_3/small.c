#include <stdio.h>

struct p {
  int ab;
  int q : 22;
};

struct p w = {0x1C87E74Fu, 816};

int main() {
  printf("checksum = %X\n", w.q);
  return 0;
}