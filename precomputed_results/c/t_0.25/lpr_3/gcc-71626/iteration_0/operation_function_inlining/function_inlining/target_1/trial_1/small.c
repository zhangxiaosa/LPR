typedef long a;

d __attribute__((__vector_size__(sizeof(a)))) fn2() {
  a c;
  d f = {{}};
  return f;
}