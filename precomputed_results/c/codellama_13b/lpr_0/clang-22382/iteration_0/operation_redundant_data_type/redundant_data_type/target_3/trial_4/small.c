
struct h {
  int i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(unsigned, signed, unsigned, unsigned, struct h);
unsigned fn2(unsigned p1) {
  struct h p;
  signed q;
  for (;;) {
    struct h r = p;
    p = r;
  }
}
struct h fn1(unsigned p1, signed p2, unsigned p3, unsigned p4, struct h p5) {
  if (p5.k) {
    goto w;
  }
  goto w;
}
