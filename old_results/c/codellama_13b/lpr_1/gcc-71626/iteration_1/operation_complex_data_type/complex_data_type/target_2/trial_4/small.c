
// Decomposed program

// typedef declaration for a long integer
typedef long int a;

// typedef declaration for a vector of a long integer
typedef a __attribute__((__vector_size__(sizeof(long)))) d;

// Function declaration
fn1(int a, int b) {}

// Function declaration
d fn2() {
  d f = {fn1};
  return f;
}

// main function
main() {
  int a = 0;
  int b = 10;
  fn1(a, b);
  d d1 = fn2();
  for (int i = 0; i < d1.length(); i++) {
    int a = d1[i];
    fn1(a, b);
  }
}
