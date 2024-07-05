
typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  d f = {1, 2, 3, 4};
  return f;
}
main() {}
