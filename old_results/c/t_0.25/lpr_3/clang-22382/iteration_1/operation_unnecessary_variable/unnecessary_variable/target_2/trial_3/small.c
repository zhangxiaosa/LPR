struct h {
  int i;
  long j;
};
unsigned l;
static struct h fn1(unsigned p1, short p2, struct h p5) {
  // No modifications to p5.k
  // Optimized out
}
int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p);
  // k is not used or modified
}
int main() {}
