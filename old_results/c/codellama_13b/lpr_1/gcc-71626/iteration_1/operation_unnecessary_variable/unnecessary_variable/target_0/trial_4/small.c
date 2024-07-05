
typedef long int a;

a fn1() {
  a f = {fn1};
  return f;
}

main() {
  a fn2() {
    a f = {fn2};
    return f;
  }
}
