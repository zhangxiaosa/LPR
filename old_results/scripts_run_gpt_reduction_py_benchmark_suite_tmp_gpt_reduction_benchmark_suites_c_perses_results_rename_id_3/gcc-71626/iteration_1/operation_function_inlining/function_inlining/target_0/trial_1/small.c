typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  d f;
  
  c = fn1;
  f = {c};
  
  return f;
}
