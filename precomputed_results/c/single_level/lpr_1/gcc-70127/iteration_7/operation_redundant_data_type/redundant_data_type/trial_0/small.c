#include <stdio.h>

unsigned int j;

unsigned int u;

signed int v[1];

signed int w = {0x1C87E74FL, 816};

int main() {
  int i;
  signed int a = {8L, 666};
  for (; u <= 1; u += 2) {
    a = v[0] = w;
    v[0] = a;
  }
  for (i = 0; i < 1; i++)
    j = v[i];
  printf("checksum = %X\n", j);
  return 0;
}