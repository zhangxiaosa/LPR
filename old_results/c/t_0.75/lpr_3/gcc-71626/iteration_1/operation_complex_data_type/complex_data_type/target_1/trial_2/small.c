void fn1() {}

typedef long d;

d fn2() {
  long c;
  fn1();
  d f;
  f = (d)c;
  return f;
}

int main() {}
