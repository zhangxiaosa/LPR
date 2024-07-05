typedef long a;
typedef a __attribute__((__vector_size__(sizeof(long)))) d;
fn1() {}
d fn2() {
  d f = {fn1};
  return f;
}
main() {}
