
struct d {
  long fn1;
};

struct d fn1() {}

struct d fn2() {
  long fn1;
  fn1 = fn1;
  return fn1;
}

struct d main() {}
