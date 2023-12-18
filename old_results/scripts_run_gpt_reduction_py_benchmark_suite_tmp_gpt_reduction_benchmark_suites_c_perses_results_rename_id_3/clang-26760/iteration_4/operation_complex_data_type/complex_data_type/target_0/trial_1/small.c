#include <stdio.h>

unsigned g;

int main() {
  unsigned j_0 = 0x7B;
  unsigned j_1 = 0xB6;
  unsigned j_2 = 0xF9;
  unsigned j_3 = 0x24;
  unsigned k;

  unsigned j = (j_3 << 24) | (j_2 << 16) | (j_1 << 8) | j_0;

  if (j)
    --j;

goto_label:
  k = k >> 1;

  if (g) {
    k = k << j;
    goto goto_label;
  }

  return 0;
}