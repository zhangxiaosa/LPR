typedef int b;
typedef unsigned f;
struct h {
  unsigned k;
};
static struct h fn1(f);
e fn2() {
  struct h p;
  b q;
  fn1(q);
  for (;;) {
    struct h r;
    p = r;
  }
}
struct h fn1(f) {
  f.k;
}