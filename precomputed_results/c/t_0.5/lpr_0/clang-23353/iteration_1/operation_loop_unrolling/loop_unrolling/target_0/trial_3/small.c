#include <stdio.h>

char fn1(char p1, char p2) {
  return p1 * p2;
}

signed h;
int i;

int main() {
  char p3;

  // Unrolled loop
  p3 = 6;
  h ^= fn1(p3, i) && 1;
  
  p3 = 5;
  h ^= fn1(p3, i) && 1;
  
  p3 = 4;
  h ^= fn1(p3, i) && 1;
  
  p3 = 3;
  h ^= fn1(p3, i) && 1;
  
  p3 = 2;
  h ^= fn1(p3, i) && 1;
  
  p3 = 1;
  h ^= fn1(p3, i) && 1;
  
  p3 = 0;
  h ^= fn1(p3, i) && 1;
  
  p3 = -1;
  h ^= fn1(p3, i) && 1;
  
  p3 = -2;
  h ^= fn1(p3, i) && 1;
  
  p3 = -3;
  h ^= fn1(p3, i) && 1;
  
  p3 = -4;
  h ^= fn1(p3, i) && 1;
  
  p3 = -5;
  h ^= fn1(p3, i) && 1;
  
  p3 = -6;
  h ^= fn1(p3, i) && 1;

  return 0;
}