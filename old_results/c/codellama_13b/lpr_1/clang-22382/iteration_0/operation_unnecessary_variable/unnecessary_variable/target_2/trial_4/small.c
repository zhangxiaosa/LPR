
struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(int p2, int p3, struct h p5) {
  p5.k;
w:;
  goto w;
}
int fn2() {
  struct h p;
  struct h r;
  fn1(0, 3, p);
  p = r;
  for (;;) {
    p = r;
  }
}
int main() {}
