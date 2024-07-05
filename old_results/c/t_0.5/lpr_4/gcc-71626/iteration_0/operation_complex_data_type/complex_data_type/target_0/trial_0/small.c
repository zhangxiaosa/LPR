typedef long d[2];

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

main() {}