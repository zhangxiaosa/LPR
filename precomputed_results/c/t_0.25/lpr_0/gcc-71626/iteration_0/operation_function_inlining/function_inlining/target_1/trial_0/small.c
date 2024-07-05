typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f;
  
  // Inlined code of fn1
  // fn1() {}
  
  c = 0; // Assuming fn1 had some code, we initialize c to a specific value
  f = {c};
  return f;
}
