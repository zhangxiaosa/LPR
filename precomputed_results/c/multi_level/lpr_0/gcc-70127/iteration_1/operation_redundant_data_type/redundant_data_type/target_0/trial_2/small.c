#include <stdio.h>
#include <string.h>

unsigned v[1][2];
int w[2] = {0x1C87E74FL, 816};

int main() {
  int a[2] = {8L, 666};
  for (unsigned u = 0; u <= 1; u += 1) {
    memcpy(a, w, sizeof(w));
    memcpy(v[0], w, sizeof(w));
  }
  unsigned j = v[0][1];
  printf("checksum = %X\n", j);
  return 0;
}