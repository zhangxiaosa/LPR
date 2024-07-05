typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  long j;
  unsigned k;
};
unsigned d l;
static struct h fn1(unsigned f, short a, unsigned g, unsigned d, struct h);
unsigned e fn2(unsigned p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned f, short p2, unsigned g, unsigned d p4, struct h p5) {
  p5.k;
w:
  goto w;
}
int main() {}
