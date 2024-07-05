typedef long d __attribute__((__vector_size__(sizeof(long))));

// Optimized code:

fn2() {
  d f = {fn1};
  return f;
}

main() {}
