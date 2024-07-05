#include <stdio.h>

struct p {
  int ab;
  signed q : 22;
};

int main() {
  struct p w = {0x1C87E74FL, 816};
  printf("checksum = %X\n", w.q);
  return 0;
}
