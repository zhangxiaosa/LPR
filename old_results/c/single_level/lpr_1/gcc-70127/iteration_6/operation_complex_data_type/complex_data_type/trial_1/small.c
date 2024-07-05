#include <stdio.h>

unsigned j;
int ab;
signed int q;
unsigned u;
int p2;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

struct p {
  int ab;
  signed int q : 22;
};

int main() {
  int i;
  struct p a = {8L, 666};

  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 2) {
      a = v[p2] = w;
      v[p2] = a;
    }

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}