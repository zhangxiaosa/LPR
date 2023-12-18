typedef unsigned g;

unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed n : 18;
  signed o : 1;
};

int r;
static signed s = -5L;

g /* optimized out */;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  int ae = ad.o;
  ad.o = u;
  r = /* replaced t with constant value */ % (~s / ae);
  ad.o;
}