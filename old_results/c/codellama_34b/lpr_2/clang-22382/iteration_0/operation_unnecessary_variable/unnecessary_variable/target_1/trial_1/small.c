
struct h {
  int i;
  long j;
  int k;
};
int l;
static struct h fn1(int p1, short p2, int p3, int p4, struct h p5) {
  p5.k;
}
int fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
}
int main() {}
