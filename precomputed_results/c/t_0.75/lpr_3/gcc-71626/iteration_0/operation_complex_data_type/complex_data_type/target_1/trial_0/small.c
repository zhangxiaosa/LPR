typedef long d[2];

long fn1;
d fn2() {
  long c = fn1;
  d f = {c, 0};
  return f;
}

int main() {
  fn1 = 0;
  d result = fn2();
  long f = result[0];
  return 0;
}