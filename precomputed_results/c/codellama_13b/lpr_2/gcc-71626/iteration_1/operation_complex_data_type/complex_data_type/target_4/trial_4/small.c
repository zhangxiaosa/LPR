
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn1() {}
d fn2() {
  long fn1_result = fn1();
  return fn1_result;
}
d main() {}
