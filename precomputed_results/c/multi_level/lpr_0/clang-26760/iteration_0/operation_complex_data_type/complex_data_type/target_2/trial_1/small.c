#include <stdio.h>

int main() {
  int f = 0;
  int g = 0;
  int i = 0;
  int j = 0x24F96B7B;
  unsigned int k = 0;
  int l = 1L;
  int m = j;
  int n = g;
  int o = n;
  unsigned int p = o;

  q:
    k = k >> l;
    i = p;
    if (i) {
      k = k << m;
      goto q;
    }

  return 0;
}