typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c;
  d f;
  c = 0;
  f = (d){c};
  return f;
}

main() {}
