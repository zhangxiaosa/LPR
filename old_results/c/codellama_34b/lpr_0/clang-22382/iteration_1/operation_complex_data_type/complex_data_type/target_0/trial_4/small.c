
#include <stdio.h>

// Decompose the struct h into its constituent parts
int i;
long j;
int k;

// Declare p5 as a struct h variable
struct h p5;

// Initialize p5 with values
p5.i = 10;
p5.j = 20;
p5.k = 30;

// Declare fn1 as a function that takes a struct h variable as an argument
static struct h fn1(struct h p5) {
  // Access the members of p5
  printf("p5.i = %d, p5.j = %ld, p5.k = %d\n", p5.i, p5.j, p5.k);

  // Return a struct h variable with the same values as p5
  return p5;
}

// Declare fn2 as a function that takes no arguments and returns an unsigned integer
unsigned fn2() {
  // Declare p as a struct h variable
  struct h p;

  // Call fn1 with p as an argument
  p = fn1(p);

  // Loop indefinitely
  for (;;) {
    // Declare r as a struct h variable
    struct h r;

    // Assign p to r
    r = p;

    // Print the values of r
    printf("r.i = %d, r.j = %ld, r.k = %d\n", r.i, r.j, r.k);
  }
}

int main() {
  // Call fn2 and print its return value
  unsigned ret = fn2();
  printf("fn2 returned %u\n", ret);

  return 0;
}
