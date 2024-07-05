fn1() {}

typedef long a;

a fn2() {
  a c = fn1;
  a f = {c};
  return f;
}

main() {}
