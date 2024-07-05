c
typedef int a; // use int instead of long

fn1() {}

typedef a d __attribute__((__vector_size__(sizeof(int)))); // use int instead of long

d fn2() {
  int c = fn1;
  d f = {c};
  return f;
}

d main() {
  d x = fn2();
  return x;
}
