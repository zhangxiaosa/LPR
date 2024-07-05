
struct h {
  int i;
  long j;
  int k;
};
static struct h fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int fn2(p1) {
  struct h p;
  fn1(p1, 1, p1, 3, p);
}
int main() {}
