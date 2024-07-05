fn1() {}
typedef long __attribute__((__vector_size__(sizeof(long)))) d;
d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}
main() {}
