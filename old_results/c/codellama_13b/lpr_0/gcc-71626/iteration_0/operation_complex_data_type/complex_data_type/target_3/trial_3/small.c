
typedef int a;

typedef a d __attribute__((__vector_size__(sizeof(int))));

d fn1() {}

d fn2() {
  int c = fn1;
  d f = {c};
  return f;
}

d main() {
  d x = fn2();
  return x;
}
