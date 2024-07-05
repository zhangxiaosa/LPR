typedef long a;
typedef __attribute__((__vector_size__(sizeof(a)))) a d;
d fn2() {
  a c;
  d f = {c};
  return f;
}