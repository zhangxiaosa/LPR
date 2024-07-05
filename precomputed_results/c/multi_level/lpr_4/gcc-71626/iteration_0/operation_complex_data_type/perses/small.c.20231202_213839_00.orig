typedef long a;
fn1() {}
typedef long __attribute__((__vector_size__(sizeof(a)))) a_vector;
a_vector fn2() {
  a c = fn1;
  a_vector f = {c};
  return f;
}
main() {}