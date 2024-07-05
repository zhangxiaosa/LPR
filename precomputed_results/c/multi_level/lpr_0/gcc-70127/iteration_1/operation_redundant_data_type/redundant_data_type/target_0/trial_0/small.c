#include <stdio.h>

unsigned int u;
int v[1];
signed int w = 816;

int main() {
  signed int a = 666;
  for (; u <= sizeof(v)/sizeof(v[0]); u += 1) {
    v[0] = w;
  }
  unsigned int j = v[0];
  printf("checksum = %X\n", j);
  return 0;
}
