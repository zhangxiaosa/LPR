typedef long c;

struct h {
  signed i;
  long j;
  unsigned k;
};

e fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
}

struct h fn1(f p1, unsigned p2, struct h p3) {
  p3.k;
}
