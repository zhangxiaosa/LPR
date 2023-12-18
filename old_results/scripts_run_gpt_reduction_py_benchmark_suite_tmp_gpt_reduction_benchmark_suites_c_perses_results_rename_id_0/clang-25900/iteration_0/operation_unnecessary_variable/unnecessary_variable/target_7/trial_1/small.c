typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

g t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = ad.o;
  r = (t /* OPTIMIZED: Replace t with 0 */) % (~s / ae);
  /* OPTIMIZED: Remove this statement */;
}