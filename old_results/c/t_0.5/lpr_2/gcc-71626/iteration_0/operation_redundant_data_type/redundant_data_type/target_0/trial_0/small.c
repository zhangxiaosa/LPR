long fn1() {}

typedef long d __attribute__((__vector_size__(sizeof(long))));

long __attribute__((__vector_size__(sizeof(long)))) fn2() {
  long c = fn1();
  long __attribute__((__vector_size__(sizeof(long)))) f = {c};
  return f;
}