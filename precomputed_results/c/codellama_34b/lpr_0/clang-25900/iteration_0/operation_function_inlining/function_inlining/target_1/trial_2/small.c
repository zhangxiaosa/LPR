
Given the following program and the specified function, optimize it out via function inlining.. The program is typedef signed a;
typedef short b;
typedef int c;
typedef long d;
typedef unsigned e;
typedef unsigned f;
typedef unsigned g;
e fn1(e p1, int p2) { return p2; }
struct k {
  f l;
};
struct m {
  signed n : 18;
  signed o : 1;
};
a p;
struct k q;
c r;
static a s = -5L;
g t;
c u;
g v;
a fn2(a, struct m, struct k, struct k, c);
b fn3(g);
d fn4() {
  struct m z;
  {
    fn3(q.l);
  }
}
int main() { fn4(); }
