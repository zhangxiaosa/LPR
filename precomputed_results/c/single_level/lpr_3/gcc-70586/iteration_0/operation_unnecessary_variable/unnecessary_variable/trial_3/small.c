#include <stdio.h>

typedef short a;
typedef int b;
typedef unsigned d;


d fn1(d p1, d p2) {
  return p1 + p2;
}

d fn2(d p1, d p2) {
  return p1 - p2;
}

unsigned i;

d fn3(d p1) {
  b l;
  a m = 0x809C;
  
  for (; p1 <= 49; p1 = fn1(p1, 8)) {
    d o = 0xE576516E;
    
    if (i)
      printf("l_1179=%lld\n", (long long)l);
      
    p1 = fn2(0x60781BCD >= m ^ 4294967287UL, o);
  }
  
  return p1;
}

int main() {
  if (fn3(1))
    ;
}
