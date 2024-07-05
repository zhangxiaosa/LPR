typedef long a;

fn1() {}

typedef long __attribute__((__vector_size__(sizeof(a)))) a_vector;

a_vector fn2() {
  // The variable 'c' is unused, so it can be optimized out
  // by deleting the assignment statement.
  // a c = fn1;
  
  a_vector f = {0};  // Assuming the initialization value
  return f;
}

main() {}