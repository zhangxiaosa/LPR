
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}
main() {
  d f1 = fn2();
  d f2 = fn2();
  d f3 = fn2();
  d f4 = fn2();
  // ...
}
