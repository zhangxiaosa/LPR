
typedef long a;
fn1() {}
typedef a d;
d fn2() {
  long c = NULL;
  d f = {c};
  return f;
}
main() {}
