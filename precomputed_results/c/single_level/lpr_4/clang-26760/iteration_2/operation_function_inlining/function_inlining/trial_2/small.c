#include <iostream>

signed g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;

  // Code optimized: the loop is effectively removed

  int l = 1L;
  signed n = g;
  int o = n;
  unsigned p = o;

q:
  k = k >> l;
  i = p;
  if (i) {
    k = k << j;
    goto q;
  }

  // Don't forget to return a value from main!
  return 0;
}