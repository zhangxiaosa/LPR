
typedef long a;

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c = fn1;
  d f = {c};
  return f;
}

main() {
  int i;

  for (i = 0; i < 3; i++) {
    a c = fn1;
    d f = {c};
    d f2 = {c};
    d f3 = {c};
    f = {f, f2, f3};
    return f;
  }
}
