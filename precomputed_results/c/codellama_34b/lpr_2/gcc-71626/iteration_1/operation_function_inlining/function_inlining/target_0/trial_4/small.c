
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  d f = {1};
  return f;
}
main() {}
