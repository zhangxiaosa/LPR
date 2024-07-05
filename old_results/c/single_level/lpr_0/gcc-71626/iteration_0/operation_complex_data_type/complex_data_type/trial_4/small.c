#include <stdio.h>

// Define primary data types

typedef long a;

void fn1() {}

// Define primary data type array

typedef long d[sizeof(a)];

// Define fn2 function

d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}

int main() {
  // Call fn2 function
  d result = fn2();

  // Print each element of the result array
  for (int i = 0; i < sizeof(result) / sizeof(result[0]); i++) {
    printf("%ld\n", result[i]);
  }

  return 0;
}