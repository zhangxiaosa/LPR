unsigned fn1(unsigned p1, int p2) { return p2; }

struct m {
  signed o : 1;
};

int r;
static signed s = -5L;
int t;
int u;
unsigned v;

int main() {
  struct m ad = {1957};
  ad.o = fn1(v, 5);
  signed ae;
  int af = t;
  ae = ad.o;
  ad.o = u;
  r = af % (~s / ae);
  ad.o;
}