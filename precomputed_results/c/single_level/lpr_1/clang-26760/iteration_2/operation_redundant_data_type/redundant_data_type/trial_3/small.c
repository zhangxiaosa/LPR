#include <stdio.h>

unsigned f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;

  for (f = 0; f;)
    for (; j; j -= 2)
      ;

  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;

q:
  k >>= l;
  i = p;

  if (i) {
    k <<= m;
    goto q;
  }

  return 0;
}