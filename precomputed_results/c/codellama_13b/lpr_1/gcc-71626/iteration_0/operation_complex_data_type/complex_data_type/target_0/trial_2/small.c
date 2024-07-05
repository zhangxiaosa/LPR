
a a;
fn1() {}
d d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}
main() {}
