typedef long d __attribute__((__vector_size__(sizeof(long))));

// Optimized version:
d fn2() {
  d f = {0};
  return f;
}

main() {}
