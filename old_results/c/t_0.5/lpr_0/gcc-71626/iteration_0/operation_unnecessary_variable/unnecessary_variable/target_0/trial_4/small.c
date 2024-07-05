long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long __attribute__((__vector_size__(sizeof(long)))) f = {fn1};
  return f;
}

main() {}
