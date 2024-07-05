
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  d f = {fn1};
  return f;
}

main() {
  d f = fn2();
  for (int i = 0; i < 10; i++) {
    f[i] = fn1();
  }
}
