#include <stdio.h>

typedef unsigned f;
typedef struct {
  int ab;
  signed q : 22;
} p;
f u;
p v[1];
p w = {0x1C87E74FL, 816};
f j;

int main() {
  int i;
  signed p2;
  p a = {8L, 666};

  p2 = 0;

  // First iteration
  u = 0;
  a = v[p2] = w;
  v[p2] = a;

  // Second iteration
  u = 1;
  a = v[p2] = w;
  v[p2] = a;

  for (i = 0; i < 1; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);

  return 0;
}