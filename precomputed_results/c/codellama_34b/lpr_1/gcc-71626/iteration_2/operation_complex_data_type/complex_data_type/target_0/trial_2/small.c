
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  return 0;
}

d fn2() {
  return fn1();
}

int main() {
  d result = fn2();
  return 0;
}
