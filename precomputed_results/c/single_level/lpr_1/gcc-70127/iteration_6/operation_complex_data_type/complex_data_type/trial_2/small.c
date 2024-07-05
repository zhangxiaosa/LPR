#include <stdio.h>

unsigned j;

int ab;
signed int q;

unsigned u;

int main() {
  int i;
  int ab;
  signed int q;
  int p2;
  struct p v[1];
  struct p w = {0x1C87E74FL, 816};

  for (p2 = 0; p2 >= 0; p2 -= 1) {
    for (; u <= 1; u += 2) {
      ab = w.ab;
      q = w.q;
      v[p2].ab = ab;
      v[p2].q = q;
    }
  }

  for (i = 0; i < 1; i++) {
    j = v[i].q;
  }

  printf("checksum = %X\n", j);

  return 0;
}