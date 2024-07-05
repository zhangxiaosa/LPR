#include <stdio.h>

unsigned f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;
  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;

  // Unrolled loop
  while (j > 0) {
    j -= 4;
    j -= 4;
    j -= 4;
    j -= 4;
  }

  q:
  k = k >> l;
  i = p;

  // Loop until i becomes zero
  while (i) {
    k = k << m;
    k = k >> l;
    i = p;
  }

  return 0;
}