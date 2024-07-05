typedef long __attribute__((__vector_size__(sizeof(long)))) d;

d fn2() {
  d f = {fn1};
  return f;
}

main() {}