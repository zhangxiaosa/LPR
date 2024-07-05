typedef long a;

fn1() {}

typedef long a __attribute__((__vector_size__(sizeof(a))));
long fn2() {
  a c = fn1;
  a f = {c};
  return f;
}

main() {}