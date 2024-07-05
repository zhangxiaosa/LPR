typedef unsigned d;
typedef unsigned e;
struct h {
  int i;
  long j;
  int k;
};
d l;
static struct h fn1(unsigned, d, struct h);
e fn2() {
  struct h p;
  int q;
  fn1(q, l, p);
  struct h r;
  p = r = p;
}
struct h fn1(unsigned p1, d p5, struct h p6) {
  p6.k;
w:;
  goto w;
}
int main() {
  fn2();
}