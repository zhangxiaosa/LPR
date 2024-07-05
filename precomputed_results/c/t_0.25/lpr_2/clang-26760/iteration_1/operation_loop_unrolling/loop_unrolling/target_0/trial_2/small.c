#include <stdio.h>

unsigned f;
signed g;

int main() {
  signed i;
  int j = 0x24F96B7B;
  unsigned k;
  for (f = 0; j >= 4; j -= 4) {
    // Loop unrolled 4 times
    ;
    ;
    ;
    ;
  }
  int l = 1L;
  int m = j;
  signed n = g;
  int o = n;
  unsigned p = o;
q:;
  k = k >> l;
  i = p;
  if (i) {
    k = k << m;
    goto q;
  }
}