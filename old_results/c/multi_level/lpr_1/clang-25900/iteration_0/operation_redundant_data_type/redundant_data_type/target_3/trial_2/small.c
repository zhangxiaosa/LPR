typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }
struct m {
  signed n : 18;
  unsigned o : 1;
};
unsigned r;
static signed long s = -5L;
g t;
unsigned u;
g v;
long fn4() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed long ae;
  unsigned af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
}

unsigned main() { fn4(); }
