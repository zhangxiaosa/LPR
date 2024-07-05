long a;
fn1() {}
long d __attribute__((__vector_size__(sizeof(long))));
long inline_fn2() {
  long c = fn1;
  long f = {c};
  return f;
}
main() {}