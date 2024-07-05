
// Eliminate the typedef long a;

typedef long d;

d fn2() {
  d f = {fn1};
  return f;
}

main() {}
