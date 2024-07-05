typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned g;
e fn1(e p1, int p2) { return p2; }
struct m {
  signed n : 18;
  signed o : 1;
};
c r;
static signed int s = -5L;
g t;
c u;
g v;
d fn4() {
  struct m p2 = {1957};
  p2.o = fn1(v, 5);
  signed int ae;
  c af = t;
  ae = p2.o;
  p2.o = u;
  r = af % (~s / ae);
  p2.o;
}
int main() { fn4(); }
