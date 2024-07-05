
int fn2(p1) {
  struct h p;
  fn1(p1, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}

// optimized code
int fn2(p1) {
  struct h p;
  fn1(p1, l, p1, 3, p);
  while (goto w) {
    struct h r;
    p = r = p;
  }
}
