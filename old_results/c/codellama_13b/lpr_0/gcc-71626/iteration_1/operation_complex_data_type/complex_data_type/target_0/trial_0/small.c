c
typedef long d;

d fn2() {
  d result;
  result = fn1();
  return result;
}

d fn1() {
  d a, b, c;
  a = 1;
  b = 2;
  c = 3;
  return a + b + c;
}

int main() {
  d x, y, z;
  x = fn1();
  y = fn2();
  z = x + y;
  return z;
}
