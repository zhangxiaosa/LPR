
unsigned fn2(p1) {
  struct h p;
  struct h r;
  p = r = p;
  while (1) {
    p = r = p;
  }
}
