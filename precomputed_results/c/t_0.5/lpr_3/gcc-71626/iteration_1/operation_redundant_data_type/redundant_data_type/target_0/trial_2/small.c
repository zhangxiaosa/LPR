fn1() {}

typedef long d;

long fn2() {
  long c = fn1;
  long f = {c};
  return f;
}

main() {}
