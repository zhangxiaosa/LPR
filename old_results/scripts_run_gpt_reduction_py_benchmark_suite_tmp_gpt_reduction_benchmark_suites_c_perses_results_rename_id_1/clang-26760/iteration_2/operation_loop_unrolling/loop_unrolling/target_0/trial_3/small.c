#include <iostream>

unsigned f;
int g;

int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned k;

  for (; j >= 4; j -= 4) {
    // Loop body iteration 1
    // Loop body iteration 2
    // Loop body iteration 3
    // Loop body iteration 4
  }

  // Remaining iterations for `j` < 4
  for (; j; --j) {
    // Loop body
  }

  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned p = o;

  while (p) {
    k = k >> l;
    i = p;
    if (i)
      k = k << m;
  }

  return 0;
}