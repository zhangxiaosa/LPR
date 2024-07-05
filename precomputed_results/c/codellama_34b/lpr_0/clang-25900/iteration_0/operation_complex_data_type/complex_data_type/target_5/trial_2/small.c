
#include <stdint.h>
#include <stdio.h>

// Decomposition of the program into variables with primary data type
unsigned g(unsigned p1, int p2) {
  return p2;
}

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static int s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  // Decomposition of the struct m variable into separate variables
  signed n = 1957;
  signed o = g(v, 5);

  // Decomposition of the variables in the main function
  int ae = o;
  o = u;
  r = t % (~s / ae);
  o;
}

