#include <stdio.h>

typedef struct {
  int ab;
  signed q : 22;
} p;

unsigned u;
p v[1];
p w = {0x1C87E74FL, 816};
unsigned j;

int main() {
  int i;
  p a = {8L, 666};

  // Inlined code from main
  {
    i;
    {
      a = w;
      v[0] = w;
    }
    v[0] = w;
  }

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
}
