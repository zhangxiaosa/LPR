typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  d f = {};
  return f;
}