typedef long d;

d fn2() {
  long c = fn1();
  d f;
  f[0] = c;
  return f;
}

int main() {
  fn2();
  return 0;
}