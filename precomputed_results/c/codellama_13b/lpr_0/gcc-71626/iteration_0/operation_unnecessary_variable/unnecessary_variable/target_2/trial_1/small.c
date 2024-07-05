
typedef long a;
fn1() {}
a __attribute__((__vector_size__(sizeof(long))) fn2() {
  long c = fn1;
  a f = {c};
  return f;
}
main() {}
