#include <stdio.h>

typedef long __attribute__((__vector_size__(sizeof a))) a_vector;

a_vector fn2() {
  a_vector f = {{0}}; // Replaced with an empty initializer list
  return f;
}

int main() {
  // Program can continue with additional logic or code
  return 0;
}