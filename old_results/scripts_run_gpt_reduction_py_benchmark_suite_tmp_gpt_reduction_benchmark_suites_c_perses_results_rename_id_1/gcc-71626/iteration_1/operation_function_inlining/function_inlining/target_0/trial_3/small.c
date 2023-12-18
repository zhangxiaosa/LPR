typedef long d __attribute__(__(__vector_size__(sizeof(long))));

d fn2() {
  d f = {};
  return f;
}

main() {}
