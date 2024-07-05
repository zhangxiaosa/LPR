
// Decomposed program

// typedef declaration for a long integer
typedef long int a;

// typedef declaration for a vector of a long integer
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Decomposed function declaration
d fn1() {
  // Decomposed function local variable
  a f;
  // Assignment statement
  f = {fn1};
  // Return statement
  return f;
}

// main function
main() {}
