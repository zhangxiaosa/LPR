#include <stdio.h>

int j;
struct p {
  int ab;
  int q : 22;
};
struct {
  unsigned s;
} t;
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  struct p a = {8L, 666};
  int i;
  
  for (int p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 1) {
      a = v[p2] = w;
      v[p2] = a;
    }
  }
  
  j = v[0].q;
  printf("checksum = %X\n", j);
  
  return 0;
}