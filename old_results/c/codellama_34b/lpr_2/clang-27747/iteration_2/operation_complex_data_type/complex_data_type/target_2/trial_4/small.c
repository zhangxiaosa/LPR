
#include <stdio.h>

struct c {
  int d : 18;
  int e;
  int h;
};

int main() {
  struct c i;
  struct c j;

  // Decompose the complex data type into primary data types
  int d = i.d;
  int e = j.e;
  int h = j.h;

  // Initialize the primary data types
  d = 0;
  e = 0;
  h = 0;

  // Compute the logical AND operation
  int n = h && d;

  // Compute the bitwise OR operation
  int p = d | -(d && d) - n;

  // Assign the result to the struct field
  i.d = p;

  return 0;
}
