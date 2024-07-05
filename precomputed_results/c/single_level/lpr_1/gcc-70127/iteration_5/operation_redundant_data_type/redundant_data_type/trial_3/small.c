#include <stdio.h>

unsigned j;
int ab;
signed q : 22;
unsigned u;
int v[1][2];
int w[2] = {0x1C87E74F, 816};

int main() {
  int i;
  int a[2] = {8, 666};
  signed p2;
  for (p2 = 0; p2 >= 0; p2 -= 1)
    for (; u <= 1; u += 2) {
      a[0] = v[p2][0] = w[0];
      a[1] = v[p2][1] = w[1];
      v[p2][0] = a[0];
      v[p2][1] = a[1];
    }
  for (i = 0; i < 1; i++)
    j = v[i][1];
  printf("checksum = %X\n", j);
  return 0;
}