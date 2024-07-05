
typedef long d;

d fn1() {}

d fn2() {
  d f;
  f = (d) fn1;
  return f;
}

d main() {}
