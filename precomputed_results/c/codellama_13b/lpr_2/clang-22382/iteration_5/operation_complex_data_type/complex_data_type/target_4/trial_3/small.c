
struct h fn2() {
  struct h p;
  struct h r;
  while (1) {
    p.i = r.i;
    p.j = r.j;
    p.k = r.k;
  }
}
