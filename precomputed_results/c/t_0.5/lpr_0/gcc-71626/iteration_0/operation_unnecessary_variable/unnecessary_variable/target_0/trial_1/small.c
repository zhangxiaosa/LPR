long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long __attribute__((__vector_size__(sizeof(long)))) f = {0};
  return f;
}

main() {}
