
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
  long int fn2() {
    long int f = {fn2};
    return f;
  }

  long int x = fn2();
  d y = fn1();
  long int z = x + y;
  return z;
}
