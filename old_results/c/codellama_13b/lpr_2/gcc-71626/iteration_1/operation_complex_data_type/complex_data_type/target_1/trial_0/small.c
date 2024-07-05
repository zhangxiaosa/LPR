
typedef long d[2];

d fn1() {
  d f = {0, 0};
  return f;
}

d fn2() {
  d f = {fn1};
  return f;
}

d main() {
  d f = {fn2};
  return f;
}
