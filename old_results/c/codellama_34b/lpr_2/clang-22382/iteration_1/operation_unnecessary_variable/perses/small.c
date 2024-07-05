struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(int p1, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int fn2(p1) {
  struct h p;
  fn1(p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}
