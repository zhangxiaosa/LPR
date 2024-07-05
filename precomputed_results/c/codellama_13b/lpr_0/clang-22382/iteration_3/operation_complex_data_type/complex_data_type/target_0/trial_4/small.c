
#include <stdio.h>

// Struct for complex data type
struct s {
  long i;
  long j;
  long k;
};

// Function to modify p5
static struct s fn1(struct s p5) {
  // Update p5.k
  p5.k++;

  // Goto label
  goto w;

w:
  // Return updated p5
  return p5;
}

// Function to call fn1
long fn2() {
  // Declare struct s variable
  struct s q;

  // Call fn1 with q as argument
  fn1(q);

  // Infinite loop
  for (;;) {
    // Declare struct s variable
    struct s r = q;

    // Assign r to q
    q = r;
  }
}

int main() {}
