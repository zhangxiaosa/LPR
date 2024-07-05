#include <stdio.h>

int f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7BL;
  unsigned k;

  for (; j; --j)
    ;

  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;

q:;
  i = p;
  goto q;
}
