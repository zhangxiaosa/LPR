
int fn2(p1) {
  struct h p;
  int q;
  fn1(q, 0, p1, 3, p);
  for (int i = 0; i < p.k; i++) {
    struct h r;
    p = r = p;
  }
}
