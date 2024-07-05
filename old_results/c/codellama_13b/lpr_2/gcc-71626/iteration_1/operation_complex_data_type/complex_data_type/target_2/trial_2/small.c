
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {}

d fn2() {
  d f[1];
  f[0] = fn1;
  return f;
}

d main() {}
