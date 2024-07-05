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
  fn1(0, l, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned p1, short p3, d p5, struct h p6) {
w:
  goto w;
}
int main() {}.