typedef unsigned d;
typedef unsigned e;
struct h {
  int i;
  long j;
  int k;
};
d l;
static struct h fn1(unsigned, short, d, struct h);
e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, 3, p);
  {
    struct h r1;
    struct h r2;
    struct h r3;
    struct h r4;
    p = r1 = p;
    p = r2 = p;
    p = r3 = p;
    p = r4 = p;
  }
}
struct h fn1(unsigned p1, short p3, d p5, struct h p6) {
  p6.k;
w:;
  goto w;
}
int main() {}