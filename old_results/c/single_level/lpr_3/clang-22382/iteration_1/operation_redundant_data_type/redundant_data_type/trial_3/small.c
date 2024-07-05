typedef long c;
typedef unsigned d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
struct h {
  signed i;
  c j;
  unsigned k;
};
static struct h fn1(f p1, g p3, d p4, struct h p5) {
  p5.k;
w:
  goto w;
}
e fn2(p1) {
  struct h p;
  int q;
  fn1(q, p1, 3, p);
  for (;;) {
    struct h r;
    p = r = p;
  }
}
int main() {}