
struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(unsigned p1, int p2, struct h p5) {
  p5.k;
  return p5;
}
unsigned fn2(unsigned p1) {
  struct h p;
  fn1(3, 3, p);
  return p;
}
