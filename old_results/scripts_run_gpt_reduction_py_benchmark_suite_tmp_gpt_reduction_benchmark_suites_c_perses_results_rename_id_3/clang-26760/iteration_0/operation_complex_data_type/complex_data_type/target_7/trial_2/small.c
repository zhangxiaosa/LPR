#include <stdio.h>

unsigned int f;
int g;

short fn1() {
  int i;
  int j = 0x24F96B7BL;
  unsigned int k;

  // Nested loops
  for (f = 0;)
    for (; j; --j)
      ;

  int l = 1L;
  int m = j;
  int o = g;
  unsigned int p = o;

q:;

  // Shifting and assignment
  k = k >> l;
  i = p;

  // Conditional statement
  if (i) {
    k = k << m;
    goto q;
  }
}

int main() {
  int n = g;  // Variable `n` with optimized assignment
}