long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long c = fn1;
  return c;
}

main() {}