
typedef long a;

fn1() {}

typedef __attribute__((__vector_size__(sizeof(a)))) d;
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

main() {}
