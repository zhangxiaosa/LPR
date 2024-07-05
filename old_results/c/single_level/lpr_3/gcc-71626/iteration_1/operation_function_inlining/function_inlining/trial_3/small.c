typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn2() {
  long c;
  d f;
  /* inline fn1() here */
  c = 0;
  f = {c};
  return f;
}

int main() {
  fn2();
  return 0;
}
