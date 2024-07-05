
static struct h fn1(struct h p) {
  p.k;
  while (1) {
    struct h r;
    p = r = p;
  }
}
