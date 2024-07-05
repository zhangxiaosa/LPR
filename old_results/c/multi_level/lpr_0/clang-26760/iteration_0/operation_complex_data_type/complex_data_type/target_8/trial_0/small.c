#include <stdio.h>

typedef signed int a;
typedef int c;
typedef unsigned int d;
typedef unsigned int e;

unsigned int f;
signed int g;

int main() {
  signed int i;
  int j = 0x24F96B7BL;
  unsigned int k;

  c l = 1L;
  int m = j;
  signed int n = g;

q:
  k = k >> l;
  i = n;

  if (i) {
    k = k << m;
    goto q;
  }

  return 0;
}