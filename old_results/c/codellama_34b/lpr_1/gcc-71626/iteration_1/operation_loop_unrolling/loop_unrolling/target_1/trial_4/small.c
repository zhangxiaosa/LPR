
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to optimize
void fn1(void) {}

// Function to optimize
void fn2(void) {
  long c = fn1;
  d f = {c};
  return f;
}

int main(void) {
  // Insert code to optimize here
  while (true) {
    // Body of the loop
    // Unrolled 4 times
    fn1();
    fn1();
    fn1();
    fn1();
  }
  return 0;
}

// End of program
