typedef long d __attribute__((__vector_size__(sizeof(long))));
d fn2() {
  long c = 0;
  d f = {c};
  return f;
}
