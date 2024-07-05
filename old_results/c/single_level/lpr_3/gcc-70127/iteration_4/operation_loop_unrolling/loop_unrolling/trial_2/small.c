#include <stdio.h>

int j;
struct p {
  int ab;
  int q: 22;
};
unsigned u;
struct p v[1];
struct p w = {0x1C87E74FL, 816};
int main() {
  int i;
  signed p2;
  struct p a = {8L, 666};

  // Unrolled version of the first nested loop
  p2 = 0;
  u = 0;
  a = v[p2] = w;
  v[p2] = a;
  u = 1;
  a = v[p2] = w;
  v[p2] = a;

  // Unrolled version of the second loop
  i = 0;
  j = v[i].q;

  printf("checksum = %X\n", j);
  return 0;
}