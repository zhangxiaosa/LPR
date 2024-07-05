
#include <iostream>

// Decompose the struct c into variables with primary data types
int d1 = 18;
int d2 = 6738;
int d3 = 165;

// Initialize the struct c variables
struct c i = {d1, d2, d3};
struct c j = {d1, d2, d3};

int main() {
  // Assign the values to the struct c variables
  i.d = 24;
  j.e = 6738;
  j.h = 165;

  // Perform the bitwise operations
  int n = j.h && i.d;
  int p = i.d | -(j.g && i.d) - n;

  // Assign the result to the struct c variable
  i.g = p;

  return 0;
}
