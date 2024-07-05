
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int h;
};
struct c i;
struct c j;

int main() {
  struct c l;
  l.d = j.e;
  int n = j.h && l.d;
  int p = l.d | -(l.d && l.d) - n;
  i.d = p;

  // Decompose the struct c into primary data types
  int d1 = l.d;
  int d2 = j.e;
  int d3 = j.h;
  int d4 = l.d;

  // Optimize the program to only use primary data types
  int n1 = d3 && d4;
  int p1 = d1 | -(d1 && d1) - n1;

  // Assign the optimized values to the struct c variables
  i.d = p1;

  return 0;
}
