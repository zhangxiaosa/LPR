typedef long a;
fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(a))));
long fn2() {
  a c = fn1;
  long f = {c};
  return f;
}
main() {}