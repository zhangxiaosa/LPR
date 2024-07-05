
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  d f;
  f[0] = c;
  return f;
}

main() {
  d result = fn2();
  // Use the result as needed
}
