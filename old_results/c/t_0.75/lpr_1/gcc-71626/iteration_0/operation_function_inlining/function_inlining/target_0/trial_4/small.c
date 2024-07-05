typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  c = 0;  // Replace the function call with the actual code of fn1 (assuming fn1 does nothing)
  f = {c};
  return f;
}