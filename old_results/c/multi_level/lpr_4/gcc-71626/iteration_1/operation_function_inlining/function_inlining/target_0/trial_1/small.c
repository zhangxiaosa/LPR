#include <stdio.h>

typedef long __attribute__((__vector_size__(sizeof a))) a_vector;

a_vector fn2() {
  a_vector f = { /* fn1 body goes here */ };
  return f;
}

int main() {
  // No changes made to `main()` function
  return 0;
}