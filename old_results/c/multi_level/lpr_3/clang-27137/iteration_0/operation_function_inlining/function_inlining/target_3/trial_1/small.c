#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;
typedef unsigned e;

d h;
b o;

static inline b fn4(b param) {
  b result = param * 2;
  return result;
}

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;

  for (i = 0; i < 10; i++) {
    while (q > s) {
      q -= 1;
    }
  }

  if (q) {
    // Removed function call to fn4
  }

  h = q;

  printf("checksum = %X\n", h);
  return 0;
}