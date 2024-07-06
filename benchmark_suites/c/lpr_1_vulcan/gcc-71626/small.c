typedef long d __attribute__((__vector_size__(sizeof(double))));
d fn2() {
  d f = {fn2};
  return f;
}
main() {}
