
typedef long d __attribute__((__vector_size__(sizeof(long))));

void fn1() {}

d fn2() {
  d f = {fn1()};
  return f;
}

int main() {
  fn2();
  return 0;
}
