#include<stdio.h>

typedef char a;
typedef short b;
typedef int c;
typedef unsigned d;

d h;
b o;
a p;

int main() {
  b q;
  int i;
  b r = o;
  q = r;
  c s = 1L;
  
  // Unrolled loop body
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  q -= 1;
  
  // Rest of the program
  if (p = q)
    ;
  h = p;
  printf("checksum = %X\n", h);
  return 0;
}