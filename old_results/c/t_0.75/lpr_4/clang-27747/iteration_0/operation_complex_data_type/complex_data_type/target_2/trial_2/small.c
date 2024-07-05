#include <stdio.h>

struct c {
  signed int d : 18;
  unsigned int e;
  unsigned int f;
  signed int g;
  signed int h;
};

struct c i;
struct c j;

int main() {
  struct c l = {24, 6738, 165};
  int m = j.e;
  l.d = m;
  signed int p = l.d | -(l.f && l.d);
  i.g = p;
  
  // Printing the optimized value of l.d
  printf("Optimized l.d: %d\n", l.d);
  
  return 0;
}