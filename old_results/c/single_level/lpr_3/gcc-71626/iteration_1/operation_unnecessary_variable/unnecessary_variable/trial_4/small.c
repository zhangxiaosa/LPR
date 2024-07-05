typedef long d __attribute__((__vector_size__(sizeof(long))));

// No need to declare fn1() since it is not implemented

d fn2() {
  d f = {0};
  return f;
}

int main() {
  fn2();
  return 0;
}