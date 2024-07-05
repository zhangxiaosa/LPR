typedef long d;

typedef unsigned e;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;
d fn4() {
  struct m ad;
  ad.o = fn1(v, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
}

int main() { fn4(); }
