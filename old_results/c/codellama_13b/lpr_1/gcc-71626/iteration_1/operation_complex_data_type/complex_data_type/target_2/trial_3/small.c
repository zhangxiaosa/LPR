
// Decomposed program

// typedef declaration for a long integer
typedef long int a;

// typedef declaration for a vector of a long integer
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
fn1(int a) {}

// Function declaration
d fn2() {
  int f[2];
  f[0] = fn1;
  f[1] = fn1;
  return f;
}

// main function
main() {}
