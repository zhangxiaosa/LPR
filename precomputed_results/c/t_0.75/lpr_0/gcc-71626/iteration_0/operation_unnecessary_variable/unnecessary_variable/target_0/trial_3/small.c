long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long c = 0;
  long __attribute__((__vector_size__(sizeof(long)))) f = {c};
  return f;
}

main() {}