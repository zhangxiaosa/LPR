#include <stdio.h>

int u;
struct p {
  int ab;
  signed q : 22;
};
struct p v[1];
struct p w = \{0x1C87E74FL, 816\};

int main() {
  struct p a = \{8L, 666\};
  
  for (; u <= 1; u += 1) {
    a = v[0] = w;
    v[0] = a;
  }
  
  printf("checksum = %X\n", 816);
  return 0;
}