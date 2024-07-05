
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  long a[2];
  a[0] = 0;
  a[1] = 1;
  return a;
}

d fn2() {
  long b[2];
  b[0] = 2;
  b[1] = 3;
  return b;
}

d main() {
  long c[2];
  c[0] = fn1();
  c[1] = fn2();
  return c;
}
