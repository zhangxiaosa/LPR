typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;

  // Inlined body of fn1
  // Empty function, no operations to perform

  f = {c};
  return f;
}