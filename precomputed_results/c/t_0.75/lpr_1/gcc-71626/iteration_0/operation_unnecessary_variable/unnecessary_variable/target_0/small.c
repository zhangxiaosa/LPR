fn1() {}
long long __attribute__((__vector_size__(sizeof(long)))) inline_fn2() {
  long long __attribute__((__vector_size__(sizeof(long)))) f = {fn1};
  return f;
}
main() {}
