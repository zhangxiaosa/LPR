typedef signed int a;
typedef int c;
typedef long int d;
typedef unsigned int e;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed int n : 18;
  signed int o : 1;
};

c r;
static a s = -5L;
c u;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  a ae;
  c af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}

int main() { fn4(); }
