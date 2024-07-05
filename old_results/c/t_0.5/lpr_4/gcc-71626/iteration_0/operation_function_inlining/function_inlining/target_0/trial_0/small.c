typedef long a;

typedef a d __attribute__((__vector_size__(sizeof(a))));

a fn2() {
  a c;
  // Inlined code of fn1()
  c = 0;
  // End of inlined code

  d f = {c};
  return f[0];
}