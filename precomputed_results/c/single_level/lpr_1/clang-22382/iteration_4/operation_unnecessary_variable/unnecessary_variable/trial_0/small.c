typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned l;
static struct h fn1(f, g, unsigned, struct h);
unsigned fn2(p1) {
  struct h p;
  fn1(l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned p1, short p2, unsigned p3, struct h p4) {
  p4.k;
w:
  goto w;
}
int main() {}
