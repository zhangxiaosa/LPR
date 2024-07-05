struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(unsigned, short);
unsigned fn2() {
  struct h p;
  int q;
  fn1(q, l);
  for (;;) {
    struct h r;
    p = r;
  }
}
struct h fn1(unsigned p1, short p2) {
  // Removed unused expression p5.k
w:
  goto w;
}