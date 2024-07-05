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
  unsigned int k;
};
unsigned d l;
static struct h fn1(f, short, unsigned, unsigned, struct h);
unsigned e fn2(p1) {
  struct h p;
  int q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
struct h fn1(unsigned f p1, short p2, unsigned g p3, unsigned d p4,
                  struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}
