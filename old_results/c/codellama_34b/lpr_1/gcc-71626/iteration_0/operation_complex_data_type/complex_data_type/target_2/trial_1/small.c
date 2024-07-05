
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c = fn1;
  long f0 = c;
  return f0;
}

main() {
  d f = fn2();
  long f0 = f[0];
  printf("%ld", f0);
}
