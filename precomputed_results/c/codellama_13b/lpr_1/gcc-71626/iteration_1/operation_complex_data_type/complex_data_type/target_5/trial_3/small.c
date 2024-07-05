
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
  d fn2() {
    a fn2_a = fn2;
    d fn2_d = {fn2_a};
    return fn2_d;
  }
}
