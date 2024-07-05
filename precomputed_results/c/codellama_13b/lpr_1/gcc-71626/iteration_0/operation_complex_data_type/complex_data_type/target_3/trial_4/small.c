
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

main() {
  d f = fn2();
  // Access the values in `f` using the `__attribute__` feature
  long x = f[0];
  long y = f[1];
  long z = f[2];
  // Do something with the values
  printf("%ld %ld %ld\n", x, y, z);
}
