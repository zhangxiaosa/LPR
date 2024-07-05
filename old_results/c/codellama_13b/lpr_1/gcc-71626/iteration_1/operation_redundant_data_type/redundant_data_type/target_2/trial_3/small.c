
typedef long a;

a __attribute__((__vector_size__(sizeof(long)))) fn2() {
  a f = {fn1};
  return f;
}

main() {}
