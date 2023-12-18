#include <stdio.h>

// Decomposed program with primary data types

// Primary data types
long fn1_value; // Variable to store the return value of fn1()

// Function declarations
void fn1();
long fn2();
int main();

// Function definitions
void fn1() {
  // Function body (empty)
}

long fn2() {
  // Variable definitions
  long c;
  long f;

  // Execute fn1() and store the return value in fn1_value
  fn1_value = fn1();

  // Assign fn1_value to c
  c = fn1_value;

  // Assign c to f
  f = c;

  // Return f
  return f;
}

int main() {
  // Function body (empty)
}
