fn1() {}

typedef long __attribute__((__vector_size__(sizeof(long)))) d;

long fn2() {
  long c = fn1();
  long f = c;
  return f;
}

main() {}
