fn1() {}

long inline_fn2() {
  long c = fn1;
  long f = {c};
  return f;
}

main() {}
