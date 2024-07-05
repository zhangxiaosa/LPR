typedef int c;

typedef unsigned e;
typedef unsigned g;

e fn1(e p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

c r;
g t;
c u;
g v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(5, 5);
  signed ae;
  ae = ad.o;
  ad.o = 0; // Replaced `u` with its initial value (0)
  r = t % (5 / ae);
  ad.o;
}