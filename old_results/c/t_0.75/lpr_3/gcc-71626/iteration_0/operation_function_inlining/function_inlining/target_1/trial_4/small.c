typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f = {0};
  return f;
}

main() {
  a c;
  d f = {0};
}