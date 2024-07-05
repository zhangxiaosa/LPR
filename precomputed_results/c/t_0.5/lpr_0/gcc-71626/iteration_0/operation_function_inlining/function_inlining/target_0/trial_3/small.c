fn2() {
  a c;
  __attribute__((__vector_size__(sizeof(a)))) f = {c};
  return f;
}