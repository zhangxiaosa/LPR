
// Decomposed program

// typedef declaration for a long integer
typedef long int a;

// typedef declaration for a vector of a long integer
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
fn1() {}

// Function declaration
d fn2() {
  a f = {fn1};
  return f;
}

// main function
main() {}
