typedef long a;
fn1() {}
typedef long a __attribute__((__vector_size__(sizeof(long))));
long fn2() {
  long f = {fn1};
  return f;
}
main() {}