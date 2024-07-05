#include <stdio.h>

// Function declaration
unsigned fn1(unsigned p2);

// Structure definition
struct m {
  int n : 18;
  int o : 1;
};

// Global variables
typedef unsigned int uint;
int r;
unsigned t;

int main() {
  // Structure initialization
  struct m ad = {1957};

  // Function call
  ad.o = fn1(5);

  // Local variables
  int ae;

  // Variable assignment
  ae = fn1(5);

  // Variable assignment
  ad.o = 0;

  // Expression evaluation
  r = t % (~(-5) / ae);

  // Expression evaluation
  ad.o;

  return 0;
}

// Function definition
unsigned fn1(unsigned p2) {
  return p2;
}