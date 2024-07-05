
struct h {
  long k;
};

struct h fn1(struct h p) {
  while (1)
    p.k;
  return p;
}

unsigned fn2() {
  struct h p;
  fn1(p);
  while (1) {
    struct h r;
    p = r = p;
  }
}
