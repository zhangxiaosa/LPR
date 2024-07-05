
#include <stdio.h>

// Structure for holding data
struct h {
  signed int i;  // signed integer
  long j;       // long integer
  unsigned int k;  // unsigned integer
};

// Function to perform operation
int fn1(int p1, short p2, int p3, int p4, struct h p5) {
  // Perform operation
  p5.k;

  // Return result
  return p5.k;
}

// Function to perform operation
int fn2(int p1) {
  // Declare variables
  struct h p;
  int q;

  // Perform operation
  fn1(q, l, p1, 3, p);

  // Return result
  return p.k;
}

int main() {
  // Declare variables
  int p1;
  struct h p;

  // Perform operation
  p1 = fn2(p);

  // Print result
  printf("%d\n", p1);

  return 0;
}
