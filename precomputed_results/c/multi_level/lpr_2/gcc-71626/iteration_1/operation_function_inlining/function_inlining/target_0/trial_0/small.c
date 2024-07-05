typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1();

d fn2() {
  return fn1;
}