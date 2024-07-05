
// Decomposed program

// Typedef declarations for primary data types
typedef long int a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
a fn1() {
  a f = {fn1};
  return f;
}

// Main function
main() {
  a fn2() {
    a f = {fn2};
    return f;
  }
}
