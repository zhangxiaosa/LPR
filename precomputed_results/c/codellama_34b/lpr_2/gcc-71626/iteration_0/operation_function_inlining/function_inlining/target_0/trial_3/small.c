
typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c = (a) (sizeof(a) == sizeof(d));
  d f = {(d) (sizeof(a) == sizeof(d))};
  return f;
}
main() {}
