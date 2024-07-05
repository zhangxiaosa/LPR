typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));
d fn2() {
  a c;
  // Body of fn1
  // ...
  d f = {c};
  return f;
}
main() {}