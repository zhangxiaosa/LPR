
typedef long a;

fn1() {}

typedef long d;

d fn2() {
  long c = fn1;
  d f = {c};
  return f;
}

main() {}
