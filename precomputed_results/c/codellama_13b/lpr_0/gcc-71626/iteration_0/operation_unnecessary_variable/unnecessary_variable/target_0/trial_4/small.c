
fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  return (long[]){ fn1 };
}

main() {
  return fn2();
}
