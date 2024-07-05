
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}
main() {
  for (int i = 0; i < 10; i++) {
    d f = fn2();
    a c = f[0];
    fn1(c);
  }
}
