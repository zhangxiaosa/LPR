
#include <stdio.h>

// Decompose the struct h into variables with primary data types
int i, j, k;

// Function to set the values of i, j, and k
void set_values(int i, long j, unsigned k) {
  // Set the values of i, j, and k
  i = i;
  j = j;
  k = k;
}

// Function to get the values of i, j, and k
void get_values(int *i, long *j, unsigned *k) {
  // Get the values of i, j, and k
  *i = i;
  *j = j;
  *k = k;
}

int main() {
  // Declare and initialize a struct h variable
  struct h p;
  p.i = 1;
  p.j = 2;
  p.k = 3;

  // Call the set_values function to set the values of i, j, and k
  set_values(p.i, p.j, p.k);

  // Call the get_values function to get the values of i, j, and k
  get_values(&p.i, &p.j, &p.k);

  // Print the values of i, j, and k
  printf("i = %d, j = %ld, k = %u\n", p.i, p.j, p.k);

  return 0;
}
