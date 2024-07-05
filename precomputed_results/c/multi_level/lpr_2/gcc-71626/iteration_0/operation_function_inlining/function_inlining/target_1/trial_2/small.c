typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  // Inline expansion of fn1 logic
  {
    // fn1 logic here
  }

  c = /* fn1 logic */;
  f = {c};
  return f;
}
