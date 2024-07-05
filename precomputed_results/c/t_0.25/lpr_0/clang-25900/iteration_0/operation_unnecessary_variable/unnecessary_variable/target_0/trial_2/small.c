typedef signed a;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;
e fn1(e p1, int p2) { return p2; }
struct m {
  int n : 18;
  int o : 1;
};
c r;
static a s = -5L;
g t;
c u;
g v;
d fn4() {
  u = fn1(v, 5);
  c af = t;
  r = af % (~s / u);
}
int main() { fn4(); }
