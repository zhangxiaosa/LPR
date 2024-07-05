
<SYS>

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

// Define the d typedef as a vector of long integers
typedef long d __attribute__((__vector_size__(sizeof(long))));

// Function to return a vector of long integers
d fn2() {
  // Declare a vector of long integers f
  d f = {fn1};

  // Return the vector f
  return f;
}

int main() {
  // Declare a vector of long integers v
  d v = fn2();

  // Print the vector v
  for (int i = 0; i < sizeof(v) / sizeof(long); i++) {
    printf("%ld ", v[i]);
  }
  return 0;
}
