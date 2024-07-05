typedef long __attribute__((__vector_size__(sizeof(long)))) d;


d fn2() {
  long c;
  d f;

  c = fn1;  // Inlined function call
  f = {c};

  return f;
}

main() {}
