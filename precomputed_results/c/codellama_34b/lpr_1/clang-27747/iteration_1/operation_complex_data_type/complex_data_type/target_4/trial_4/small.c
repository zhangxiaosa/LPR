
#include <stdio.h>

// Decompose the structure into primary data types
struct c {
  int d : 18;
  int e;
  int g;
  int h;
};

// Declare the variables
int main() {
  struct c i;
  int m;
  int n;
  int p;

  // Initialize the variables
  i.d = 0;
  i.e = 0;
  i.g = 0;
  i.h = 0;

  // Assign value to m
  m = i.e;

  // Assign value to l.d
  l.d = m;

  // Compute n
  n = i.h && l.d;

  // Compute p
  p = l.d | -(l.d && l.d) - n;

  // Assign value to i.g
  i.g = p;

  // Print the values
  printf("i.d: %d\n", i.d);
  printf("i.e: %d\n", i.e);
  printf("i.g: %d\n", i.g);
  printf("i.h: %d\n", i.h);
  printf("l.d: %d\n", l.d);
  printf("m: %d\n", m);
  printf("n: %d\n", n);
  printf("p: %d\n", p);

  return 0;
}
