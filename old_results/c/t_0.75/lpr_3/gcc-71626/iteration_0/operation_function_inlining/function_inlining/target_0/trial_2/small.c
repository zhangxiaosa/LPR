typedef long a;
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  a c = 0;
  d f = {c};
  return f;
}