typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  // Inlined code of fn1
  // Start of fn1 inlined code
  // End of fn1 inlined code
  f = {c};
  return f;
}