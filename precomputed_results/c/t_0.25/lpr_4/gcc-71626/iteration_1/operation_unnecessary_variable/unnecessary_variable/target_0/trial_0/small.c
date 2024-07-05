typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  return fn1;
}

main() {}
