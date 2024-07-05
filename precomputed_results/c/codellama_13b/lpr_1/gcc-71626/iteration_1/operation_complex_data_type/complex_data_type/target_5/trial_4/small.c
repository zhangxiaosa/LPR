
// Decomposed program

// Typedef declarations for primary data types
typedef long int a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
d fn1() {
  d f = {fn1};
  return f;
}

// Main function
main() {
  // Decompose fn2
  a fn2_a = {fn2};
  return fn2_a;
}
