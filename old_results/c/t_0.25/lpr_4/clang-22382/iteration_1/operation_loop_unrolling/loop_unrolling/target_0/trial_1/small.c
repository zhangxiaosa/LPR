typedef unsigned d;
typedef unsigned e;
struct h {
  int i;
  long j;
  int k;
};
d l;
static struct h fn1(unsigned, short, d);
e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, 3);
  struct h r1;
  p = r1 = p;
  struct h r2;
  p = r2 = p;
  ...
  struct h rN;
  p = rN = p;
}
struct h fn1(unsigned p1, short p3, d p5) {
  // Empty body
}
int main() {}
