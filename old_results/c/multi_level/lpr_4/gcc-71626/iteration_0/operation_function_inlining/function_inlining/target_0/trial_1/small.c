typedef long a;
typedef a d __attribute__((__vector_size__(sizeof(a))));

d fn2() {
  a c;
  d f = {c};
  return f;
}

int main() {
  // Call fn2() to demonstrate its usage
  fn2();

  return 0;
}