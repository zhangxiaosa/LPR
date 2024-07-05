fn1() {}

typedef a __attribute__((__vector_size__(sizeof(a))));

fn2() {
  d f = {fn1};
  return f;
}

main() {}
