
// Decomposed program

// typedef declaration for a long integer
typedef long int a;

// typedef declaration for a vector of a long integer
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
d fn1(a x) {
  // Decompose x into individual variables
  a y = x;
  a z = y;

  // Perform operations on y and z
  y = y + 1;
  z = z + 2;

  // Return the result
  d f = {y, z};
  return f;
}

// main function
main() {
  // Call fn1 with an argument
  d f = fn1(5);
  // Print the result
  printf("%d %d", f[0], f[1]);
}
