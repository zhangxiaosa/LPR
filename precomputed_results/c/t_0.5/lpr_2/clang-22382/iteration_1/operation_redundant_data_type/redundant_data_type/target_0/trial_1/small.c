typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
struct h {
  signed i;
  long j;
  unsigned k;
};
d l;
static struct h fn1();
e fn2(p1) {
  struct h p;
  fn1(l, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
static struct h fn1(unsigned p1, struct h p5) {
  p5.k;
w:
  goto w;
}
int main() {}
