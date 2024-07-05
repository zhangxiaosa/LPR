
int fn2(p1) {
  struct h p;
  p.k = p1;
  while (1) {
    struct h r;
    p = r = p;
  }
}
