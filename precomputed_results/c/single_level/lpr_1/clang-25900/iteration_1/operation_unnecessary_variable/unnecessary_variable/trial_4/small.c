int fn1(unsigned p1, int p2) {
  return p2;
}

struct m {
  int n : 18;
  int o : 1;
};

int r;
static signed s = -5L;
unsigned t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  u = fn1(v, 5); // copy propagation: ad.o is replaced with u
  signed ae;
  int af = t;
  ae = u; // ad.o is replaced with u
  ad.o = u; // ad.o is replaced with u
  r = af % (~s / ae);
  u; // ad.o is removed as it is unused
}