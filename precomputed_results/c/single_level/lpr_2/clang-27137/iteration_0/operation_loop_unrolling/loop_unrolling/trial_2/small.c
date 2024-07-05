#include <stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;

void fn1(d p1, int p2) {
  printf("checksum = %X\n", p1);
}

d h;
b o;
a p;

a fn5() {
  b q;
  b r = o;
  c s = 1L;
  
  q = r;
  
  // Unrolled loop iterations
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;
  if (q > s) q -= 1;

  if (p = q) {
    // Do nothing
  }
}

int main() {
  int t = 0;

  fn5();

  h = p;
  fn1(h, t);

  return 0;
}