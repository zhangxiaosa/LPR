
typedef long a;

a fn1() {}

a fn2() {
  a f = {fn1};
  return f;
}

main() {}
