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
g v;

d fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  a ae;
  ae = ad.o;
  r = t % (~s / ae);
  ad.o;
}

int main() { fn4(); }
