typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = 0;  // replaced `fn1` with 0 (assuming fn1 returns 0)
  d f = {c};
  return f;
}