
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// Declare the variables with primary data types
int64_t c;
int64_t* d;

// Function to return the value of c
int64_t fn1() {
  c = 10;
  return c;
}

// Function to return the value of d
int64_t fn2() {
  d = malloc(sizeof(int64_t));
  *d = fn1();
  return *d;
}

int main() {
  // Call the functions and print the results
  printf("c = %ld\n", fn1());
  printf("d = %ld\n", fn2());

  // Free the memory allocated by malloc
  free(d);

  return 0;
}
