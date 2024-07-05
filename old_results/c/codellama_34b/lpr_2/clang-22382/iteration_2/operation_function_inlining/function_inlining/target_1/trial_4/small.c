
int fn2(p1) {
  struct h p;
  p.k = p1;
  for (;;) {
    struct h r;
    p = r = p;
  }
}
