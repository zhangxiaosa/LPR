
typedef long d;

d fn2() {
  d x = fn1();
  return x;
}

d fn1() {
  // do something
  return 0;
}

main() {
  d x = fn2();
  return x;
}
