#include <stdio.h>

int main() {
  int ab;
  int q;
  unsigned j;
  unsigned u;
  int v[1][2];
  int w[2] = {0x1C87E74FL, 816};
  int a[2] = {8L, 666};
  int p2;

  for (p2 = 0; p2 < 1; p2 += 1) {
    for (; u <= 1; u += 1) {
      for (int i = 0; i < 2; i++) {
        a[i] = v[p2][i] = w[i];
        v[p2][i] = a[i];
      }
    }
    j = v[p2][1];
  }

  printf("checksum = %X\n", j);
  return 0;
}