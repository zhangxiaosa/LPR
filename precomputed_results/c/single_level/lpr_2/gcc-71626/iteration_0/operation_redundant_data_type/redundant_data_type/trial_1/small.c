typedef long a;
fn1() {}
typedef a d __attribute__((__vector_size__(sizeof(a))));
a fn2() {
  a c = fn1;
  a f = {c};
  return f;
}
main() {}
