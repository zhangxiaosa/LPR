
typedef long d __attribute__((__vector_size__(sizeof(long))));

fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

main() {
  long c = fn1;
  d f = {c};
  return f;
}
