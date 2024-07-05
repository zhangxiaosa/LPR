
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  return 0;
}

d fn2() {
  d f = {fn1};
  return f;
}

d main() {
  d result = fn2();
  return result;
}
