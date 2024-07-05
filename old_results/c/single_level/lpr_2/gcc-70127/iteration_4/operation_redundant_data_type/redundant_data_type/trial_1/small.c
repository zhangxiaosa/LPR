#include <stdio.h>

unsigned j;
unsigned u;
int ab;
int q : 22;
int v[1][2];
int w[2] = {0x1C87E74FL, 816};

int main() {
  int a[2] = {8L, 666};
  int p2;
  for (p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      a[0] = v[p2][0] = w[0];
      a[1] = v[p2][1] = w[1];
    }
    j = v[p2][1];
  }
  printf("checksum = %X\n", j);
  return 0;
}