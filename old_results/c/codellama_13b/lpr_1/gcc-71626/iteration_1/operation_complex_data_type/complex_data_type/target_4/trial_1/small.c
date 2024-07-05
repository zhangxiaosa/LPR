
#include <stdio.h>
#include <stdlib.h>

// Typedef declarations for primary data types
typedef long int a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
d fn1() {
  d f = {fn1};
  return f;
}

// Main function
int main() {
  // Decompose the variable "f" into variables with primary data types
  a x = fn1();
  a y = fn1();
  a z = fn1();

  // Print the variables
  printf("x = %ld\n", x);
  printf("y = %ld\n", y);
  printf("z = %ld\n", z);

  return 0;
}
