#include <stdint.h>

unsigned int f;
int g;

int main() {
  int i;
  int j = 0x24F96B7BL;
  unsigned int k;

  for (f = 0;)
    for (; j; --j)
      ;

  int l = 1L;
  int m = j;
  int n = g;

q:
  k = k >> l;
  i = n;

  if (i) {
    k = k << m;
    goto q;
  }
}