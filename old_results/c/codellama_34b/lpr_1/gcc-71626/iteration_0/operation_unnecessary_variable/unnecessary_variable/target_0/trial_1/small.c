
<SYS>

fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}
main() {}

// Optimization using constant propagation
fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = fn1;
  d f = {fn1};
  return f;
}
main() {}

// Optimization using copy propagation
fn1() {}
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  return {fn1};
}
main() {}

</SYS>
