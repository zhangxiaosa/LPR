#include <stdio.h>

// Function declaration
int fn1(unsigned int p1, int p2);

// Global variables
int n;
int o;
int r;
int s = -5;
int t;
int u;
int ae;

// Main function
int main() {
  // Struct declaration
  struct m {
    int n : 18;
    int o : 1;
  };

  // Struct variable declaration and initialization
  struct m p2 = {
    .n = 1957,
    .o = 0  // Not explicitly used
  };

  // Function call
  p2.o = fn1(5, 5);

  // Assignment statements
  ae = p2.o;
  p2.o = u;
  r = t % (~s / ae);

  // Unused expression statement
  p2.o;
}
