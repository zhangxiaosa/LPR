typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  return (d) {fn1};
}

main() {}
