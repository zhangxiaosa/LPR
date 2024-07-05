
typedef long d __attribute__((__vector_size__(sizeof(long))));

d fn1() {
  // Function definition
}

d fn2() {
  return fn1();
}

int main() {
  // Call to fn2
  d ret = fn2();
  return 0;
}
