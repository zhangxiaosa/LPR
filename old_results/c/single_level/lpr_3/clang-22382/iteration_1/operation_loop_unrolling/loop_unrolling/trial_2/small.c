typedef int b;
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
  return p5;
}
e fn2(p1) {
  struct h p;
  b q;
  fn1(q, p1, 3, p);
}
int main() {}
