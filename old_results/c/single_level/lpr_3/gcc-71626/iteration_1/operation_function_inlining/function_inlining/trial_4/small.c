typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  long c = fn1;
  d f = {c};
  return f;
}