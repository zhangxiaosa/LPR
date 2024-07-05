#include <stdio.h>

typedef int c;
typedef unsigned f;

f j;
struct p {
  c ab;
  signed q : 22;
};

f u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};

int main() {
  int i;
  struct p a = {8L, 666};

  // Unrolled loop iterations
  u = 0;
  a = v[i] = w;
  v[i] = a;

  u = 1;
  a = v[i] = w;
  v[i] = a;

  for (i = 0; i < 2; i++)
    j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}