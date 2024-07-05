typedef long a;

fn1() {}

typedef long d;
long inline_fn2() {
  a c = fn1;
  long f = c;
  return f;
}

main() {}
