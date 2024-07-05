struct h {
  signed i;
  long j;
  unsigned k;
};
static struct h fn1(unsigned p3, struct h p5) {
  p5.k;
  while (1) {
  }
}
unsigned fn2() {
  struct h p;
  int q;
  fn1(q, p);
  while (1) {
    struct h r;
    p = r = p;
  }
}
int main() {}
