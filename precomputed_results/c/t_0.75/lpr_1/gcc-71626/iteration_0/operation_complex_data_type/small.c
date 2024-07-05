typedef long a;
fn1() {}
long long __attribute__((__vector_size__(sizeof(long)))) inline_fn2() {
  a c = fn1;
  long long __attribute__((__vector_size__(sizeof(long)))) f = {c};
  return f;
}
main() {}
