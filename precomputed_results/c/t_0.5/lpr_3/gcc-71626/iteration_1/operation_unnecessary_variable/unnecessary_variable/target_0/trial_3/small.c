typedef long d __attribute__((__vector_size__(sizeof a)));

// Optimized version of fn2

// Replaced variable c with constant value fn1

// Removed unused variable f

// Returned constant value fn1 directly

// Removed unused main function

d fn2() {
  return {fn1};
}

fn1() {}
