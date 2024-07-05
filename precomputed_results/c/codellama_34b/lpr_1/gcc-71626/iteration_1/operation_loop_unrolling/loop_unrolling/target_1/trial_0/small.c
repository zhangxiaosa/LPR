
fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}
main() {
  while (true) {
    d f = fn2();
    // loop body
    d g = fn2();
    // loop body
  }
}
