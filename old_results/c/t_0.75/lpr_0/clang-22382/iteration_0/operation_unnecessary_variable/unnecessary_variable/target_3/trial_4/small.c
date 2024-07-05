typedef short a;
typedef int b;
typedef long c;
typedef unsigned d;
struct h {
  unsigned k;
};
static struct h fn1(a, struct h);
void fn2() {
  struct h p;
  b q;
  fn1(q, p);
  for (;;) {
    struct h r;
    p = r;
  }
}
struct h fn1(a p1, struct h p5) {
w:
  goto w;
}
int main() {}
