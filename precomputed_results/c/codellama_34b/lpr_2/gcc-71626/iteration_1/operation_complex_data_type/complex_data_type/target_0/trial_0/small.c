
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long fn1_result = fn1();
  d f = {fn1_result};
  return f;
}
main() {}
