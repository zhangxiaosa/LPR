
typedef signed int b;
typedef long c;
typedef unsigned int d;
typedef unsigned int e;
typedef unsigned int f;
typedef unsigned int g;
struct h {
  signed int i;
  c j;
  unsigned int k;
};
d l;
static struct h fn1(f, b, g, d, struct h);
e fn2(p1) {
  struct h p;
  b q;
  fn1(q, l, p1, 3, p);
  for (;;) {
    struct h r = p;
    p = r;
  }
}
struct h fn1(f p1, b p2, g p3, d p4, struct h p5) {
  p5.k;
w:;
  goto w;
}
int main() {}
