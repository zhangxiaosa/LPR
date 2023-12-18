#include <iostream>

unsigned f;
int g;
int main() {
  int j = 0x24F96B7BL;
  unsigned k;
  for (f = 0;)
    for (; j; --j)
      ;
  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned p = o;
  while (p) {
    k = k >> l;
    if (0) // Condition removed since 'i' is optimized out
      k = k << m;
  }
}