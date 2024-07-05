typedef long d __attribute__((__vector_size__(sizeof(long))));
fn1() {}
d fn2() {
  // Optimization: c is unused, so we can remove the assignment
  // long c = fn1;
  d f = {0};
  return f;
}
main() {}
