
#include <stdio.h>

// Decomposed variables with primary data type
int n = 18;
int o = 1;
int r;
int s = -5L;
int u;

// Function to be inlined
int fn4_inlined(int p1) {
  r = u % (~s / p1);
  return r;
}

int main() {
  // Calling the inlined function
  fn4_inlined(5);
  return 0;
}

