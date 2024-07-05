
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  d f = {0};
  a c = fn1;
  f[0] = c;
  f[1] = c;
  f[2] = c;
  f[3] = c;
  return f;
}

main() {}
